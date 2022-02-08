#include <bits/stdc++.h>

using namespace std;
/*
 * 填涂颜色——AC
 * */
const int N=35;
int G[N][N];
int n;
int dx[4]={0,1,0,-1},dy[4]={1,0,-1,0};
bool check(int x,int y){
    if(x<0 || x>n+1 || y<0 || y>n+1 || G[x][y]==1 || G[x][y]==3) return true;
    return false;
}

void dfs(int x,int y){
    if(check(x,y)) return ;
    if(G[x][y]==0) G[x][y]=3;
    for(int i=0;i<4;i++){
        dfs(x+dx[i],y+dy[i]);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>G[i][j];
        }
    }
    dfs(0,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(G[i][j]==0){
                G[i][j]=2;
            }
            else if(G[i][j]==3){
                G[i][j]=0;
            }
        }
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cout<<G[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}