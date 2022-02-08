#include <bits/stdc++.h>

using namespace std;

const int N=25;
int n,r;
int path[N];
bool vis[N];

void dfs(int u){

    //终止条件
    if(u>r){
        for(int i=1;i<=r;i++){
            cout<<setw(3)<<path[i];
        }
        cout<<endl;
        return ;
    }

    //从1到n枚举所有数
    for(int i=path[u-1]+1;i<=n;i++){
        if(!vis[i]){
            path[u]=i;
            vis[i]=true;
            dfs(u+1);
            vis[i]=false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>r;
    dfs(1);
    return 0;
}