#include <bits/stdc++.h>
/**
 * 邮递员送信
 *2022/2/28 9:24
 */
using namespace std;

typedef pair<int,int> PII;
typedef long long ll;
const int N=2050,M=2e5+50;

vector<pair<int,int> >G[M];
void add(int u,int v,int w){
    G[u].push_back({v,w});
}

struct node{
    int id;
    ll d;
};

bool operator <(node a,node b){
    return a.d>b.d;
}

int n,m;
ll dis[N];
bool vis[N];
//priority_queue<PII,vector<PII>,greater<PII> > q;
priority_queue<node> q;
void dijkstra(int s){
    memset(dis,0x3f,sizeof dis);   //初始化距离为无穷大
    dis[s]=0;
    q.push({s,0});   //first表示节点编号，second表示距离
    while(!q.empty()){
        //        pair<int,int> t=q.top();
        node topp=q.top();
        q.pop();
        int x=topp.id;
        if(vis[x]) continue;
        vis[x]=true;
        for(int i=0;i<(int)G[x].size();i++){   //遍历图的邻接表
            int v=G[x][i].first;
            ll w=G[x][i].second;
            if(dis[v]>dis[x]+w){
                dis[v]=dis[x]+w;
                q.push({v,dis[v]});
            }
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    ll sum=0;
    for(int i=0;i<m;i++){
        int a,b;
        ll c;
        cin>>a>>b>>c;
        add(a,b,c);
        add(b+n,a+n,c); //建立返回时候的图，为了区别和正图时候的最短路，所以在返图每个节点上加上n
    }
    dijkstra(1);
    for(int i=2;i<=n;i++){
        sum+=dis[i];
    }
    dijkstra(1+n);
    for(int i=2+n;i<=2*n;i++){
        sum+=dis[i];
    }
    cout<<sum<<endl;
    return 0;
}