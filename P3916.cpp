#include <bits/stdc++.h>

using namespace std;

const int N=1e5+10;
int h[N],e[N],ne[N],idx;   //邻接表
int res[N];   //用于记录可以到达的点
int vis[N];
int n,m;
//构图
void add(int a,int b){
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

void dfs(int u,int fa){
    res[u] = fa;
    for(int i=h[u];i!=-1;i=ne[i]){
        int j=e[i];
        if(!res[j]) dfs(j,fa);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(h,-1,sizeof h);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        add(b,a);
    }
    for(int i=n;i>=1;i--){
        if(res[i]) continue;
        dfs(i,i);
    }
    for(int i=1;i<=n;i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}