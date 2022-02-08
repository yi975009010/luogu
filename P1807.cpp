#include <bits/stdc++.h>

using namespace std;
typedef pair<int,int> PII;
const int N=1010,M=10010;
int n,m,sum=0;
int matrix[N][N];
int dis[N];

void bfs(){
    memset(dis,-1,sizeof dis);
    queue<int> q;
    dis[1]=0;
    q.push(1);
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=1;i<=n;i++){
            if(matrix[t][i] && dis[i]<dis[t]+matrix[t][i]){
                dis[i]=matrix[t][i];
                q.push(i);
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int a,b,c;
        cin>>a>>b>>c;
        matrix[a][b]=max(matrix[a][b],c);
    }
    bfs();
    cout<<dis[n]<<endl;
    return 0;
}