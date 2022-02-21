#include<bits/stdc++.h>
using namespace std;

const int N=100010,M=100010;
int p[N];
int n,m,k;
struct Edge{
    int u,v,w;
}edges[M];

bool cmp(Edge a,Edge b){
    return a.w>b.w;
}

int find(int x){
    return p[x]==x?p[x]:p[x]=find(p[x]);
}



int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>k;
    for(int i=0;i<m;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }
    for(int i=1;i<=n;i++){
        p[i]=i;
    }

    sort(edges,edges+m,cmp);

    int res=0,cnt=0;
    for(int i=0;i<m;i++){
        int a=edges[i].u,b=edges[i].v,c=edges[i].w;
        a=find(a);
        b=find(b);
        if(a!=b){
            p[a]=b;
            res+=c;
            cnt++;
            if(cnt==k){
                cout<<res<<endl;
                return 0;
            }
        }
    }
    return 0;
}