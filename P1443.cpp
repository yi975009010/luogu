#include <bits/stdc++.h>

using namespace std;

const int N=410,M=410;
int G[N][N];
bool vis[N][N];
int n,m;
int dx[4]={1,-1,2,-2};
int dy[4]={1,-1,2,-2};

bool check(int x,int y){
    if(x>=1 && x<=n && y>=1 && y<=m) return true;
    return false;
}
void bfs(int x,int y,int step){
    queue<pair<int,int>> q;
    q.push({x,y});
    vis[x][y]=true;
    G[x][y]=step;
    while(!q.empty()){
        pair<int,int> temp = q.front();
        q.pop();
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                if(abs(dx[i])!= abs(dy[j])){
                    int newX=temp.first+dx[i];
                    int newY=temp.second+dy[j];
                    if(check(newX,newY)){
                        if(!vis[newX][newY]){
                            q.push({newX,newY});
                            vis[newX][newY]= true;
                            G[newX][newY]=G[temp.first][temp.second]+1;
                        }
                    }
                }
            }
        }
    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    memset(G,-1,sizeof G);
    int x,y;
    cin>>n>>m>>x>>y;
    bfs(x,y,0);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            printf("%-5d", G[i][j]);
        }
        printf("\n");
    }
    return 0;
}