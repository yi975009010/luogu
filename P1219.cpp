#include <bits/stdc++.h>
using namespace std;

/*
 * 八皇后问题  ——AC
 * */
int n,res=0;
const int N=20;
int G[N][N];
bool col[N],dg[N],udg[N];

void dfs(int u){
    if(u==n+1){
        //终止条件时，输出皇后的位置,
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(G[i][j]!=0 && res<3){
                    cout<<G[i][j]<<" ";
                }
            }
        }
        if(res<3){
            cout<<endl;
        }
        res++;
    }

    for(int i=1;i<=n;i++){
        if(!col[i] && !dg[u+i] && !udg[n-u+i]){
            G[u][i]=i;
            col[i]=dg[u+i]=udg[n-u+i]=true;
            dfs(u+1);
            col[i]=dg[u+i]=udg[n-u+i]= false;
            G[u][i]=0;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;   //皇后个数

    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            G[i][j]=0;
        }
    }
    dfs(1);
    cout<<res<<endl;
    return 0;
}