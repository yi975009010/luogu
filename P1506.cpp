#include <bits/stdc++.h>

using namespace std;
/*
 * 	拯救oibh总部——AC
 * */
const int N=510;
char G[N][N];
bool vis[N][N];
int dx[10]={0,0,-1,1};
int dy[10]={1,-1,0,0};
int n,m;
bool check(int x,int y){
    if(x<0 || y<0 || x>n+1 || y>m+1 || G[x][y]=='*') return true;
    return false;
}
void dfs(int x,int y){
    if(check(x,y)) return ;
    G[x][y]='*';   //如果此时访问的点是0则将其变为*
    for(int i=0;i<4;i++){
        dfs(x+dx[i],y+dy[i]);
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int res=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>G[i][j];
        }
    }
    dfs(0,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(G[i][j]=='0'){
                res++;
            }
        }
    }

    cout<<res<<endl;

    return 0;
}