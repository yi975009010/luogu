#include <bits/stdc++.h>
/**
 *2022/2/28 11:40
 */
using namespace std;

typedef pair<int,int> PII;
const int N=1e6+10,M=2e6+10,mod=100003;
int h[N],e[M],ne[M],idx;
int dis[N],ans[N];
bool vis[N];
int n,m;
void add(int a,int b){
    e[idx]=b,ne[idx]=h[a],h[a]=idx++;
}

void dijkstra(){
    memset(dis,0x3f,sizeof dis);
    priority_queue<PII,vector<PII>,greater<PII>> q;
    dis[1]=0;
    ans[1]=1;
    q.push({0,1});
    while(!q.empty()){
        pair<int,int> t=q.top();
        q.pop();
        int x=t.second;
        if(vis[x]) continue;
        vis[x]=true;
        for(int i=h[x];i!=-1;i=ne[i]){
            int j=e[i];
            if(dis[j]>dis[x]+1){
                dis[j]=dis[x]+1;
                ans[j]+=ans[x];
                if(!vis[j]){
                    q.push({dis[j],j});
                }
            }
            else if(dis[j]==dis[x]+1){
                ans[j]+=ans[x];
                ans[j]%=mod;
            }
        }
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
        add(a,b);
        add(b,a);
    }


    dijkstra();
    for(int i=1;i<=n;i++){
        cout<<ans[i]<<endl;
    }
    return 0;
}