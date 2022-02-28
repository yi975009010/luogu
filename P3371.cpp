#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=2e5+10;
const ll INF=pow(2,31)-1;   //无穷大

vector<pair<int,ll> >G[N];  //图的存储

/*在u和v之间连权值为w的边*/
void addedge(int u,int v,int w){
    G[u].push_back({v,w});
}

int n,m;  //n个顶点，m条边
int s;   //源点

ll dis[N];   //最短路数组

struct node{
    int id;   //节点编号
    ll d;     //源点到节点的距离
};

/*将node重载为近距离的优先*/
bool operator<(node a,node b){
    return a.d>b.d;
}

priority_queue<node> q;
bool vis[N];   //标记数组，看是否被访问过
void Dijkstra(int s){
    for(int i=1;i<=n;i++){
        vis[n]=0;   //0表示元素都没被访问过
        dis[i]=INF;  //距离为无穷大
    }
    dis[s]=0;   //源点到源点的距离为 0
    q.push({s,0});   //将源点放入队列
    while(!q.empty()){
        node topp=q.top();
        q.pop();
        int u=topp.id;
        if(vis[u]) continue;   //如果u被访问过了，继续
        vis[u]=1;  //将u置为已访问
        for(int i=0;i<(int)G[u].size();i++){
            int v=G[u][i].first;
            ll w=G[u][i].second;
            if(dis[v]>dis[u]+w){
                dis[v]=dis[u]+w;
                q.push({v,dis[v]});
            }
        }
    }
}

int main(){
    cin>>n>>m>>s;
    int u,v;
    ll w;
    for(int i=1;i<=m;i++){
        cin>>u>>v>>w;
        addedge(u,v,w);
    }
    Dijkstra(s);
    for(int i=1;i<=n;i++){
        cout<<dis[i]<<" ";
    }
    cout<<endl;
    return 0;

}

