#include<bits/stdc++.h>
using namespace std;

const int N=1010;
char matrix[N][N];
bool vis[N][N];
int n,m;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};
int ans[100005];

//判断边界
bool check(int x,int y){
    if(x>=1 && x<=n && y>=1 && y<=n) return true;
    return false;
}
void bfs(int x,int y,int &cnt){
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y]=true;
    while(!q.empty()){
        pair<int,int> temp=q.front();
        q.pop();
        for(int i=0;i<4;i++){
            int newX=temp.first+dx[i];
            int newY=temp.second+dy[i];
            if(!vis[newX][newY] && matrix[newX][newY]!=matrix[temp.first][temp.second] && check(newX,newY)){
                cnt++;
                q.push({newX,newY});
                vis[newX][newY]=true;
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>matrix[i][j];
        }
    }

    while(m--){
        int a,b,cnt=1;
        cin>>a>>b;
        memset(vis,false,sizeof vis);
        bfs(a,b,cnt);
        cout<<cnt<<endl;
    }
    return 0;
}
