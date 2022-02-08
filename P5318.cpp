#include <bits/stdc++.h>

using namespace std;

const int N=1e5+10,M=1e6+10;
bool vis[N];
vector<pair<int,int>> G;
vector<int> edge[M];
int n,m;


void dfs(int u){
    vis[u]=true;
    cout<<u<<" ";

    for(int i=0;i<edge[u].size();i++){
        int j=G[edge[u][i]].second;
        if(!vis[j]){
            dfs(j);
        }
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    cout<<u<<" ";
    vis[u]=true;
    while(!q.empty()){
        int t=q.front();
        q.pop();
        for(int i=0;i<edge[t].size();i++){
            int j=G[edge[t][i]].second;
            if(!vis[j]){
                q.push(j);
                cout<<j<<" ";
                vis[j]=true;
            }
        }
    }
}

bool cmp(pair<int,int> a,pair<int,int>b){
    if(a.second==b.second) return a.first<b.first;
    else return a.second<b.second;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;

    for(int i=0;i<m;i++){
        int a,b;
        cin>>a>>b;
        G.push_back({a,b});
    }

    sort(G.begin(),G.end(), cmp);

    for(int i=0;i<m;i++){
        edge[G[i].first].push_back(i);
    }

    dfs(1);
    cout<<endl;
    memset(vis,false,sizeof vis);
    bfs(1);
    cout<<endl;
    return 0;
}