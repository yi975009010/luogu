#include<bits/stdc++.h>
using namespace std;

const int N=1e4+10,M=2e4+10;
int p[N];
int n,m,s,t;
struct Edge{
    int u,v,w;
}edges[M];


/*并查集*/
int find(int x){
    return p[x]==x?p[x]:p[x]= find(p[x]);
}

bool cmp(Edge a,Edge b){
    return a.w<b.w;
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m>>s>>t;
    for(int i=0;i<m;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }

    for(int i=1;i<=n;i++){
        p[i]=i;
    }
    sort(edges,edges+m,cmp);
    for(int i=0;i<m;i++){
        int a=edges[i].u,b=edges[i].v,c=edges[i].w;
        a=find(a);
        b=find(b);
        if(a!=b){
            p[a]=b;
        }
        if(find(s)==find(t)){
            cout<<edges[i].w;
            return 0;
        }
    }
    return 0;
}

