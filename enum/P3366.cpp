#include <bits/stdc++.h>
/**
 *2022/2/21 17:15
 */
using namespace std;

const int N=5050,M=2e5+10;
int p[N];
int n,m;
struct edge{
    int u,v,w;
}edges[M];

int find(int x){
    return p[x]==x?p[x]:p[x]=find(p[x]);
}
bool cmp(edge a,edge b){
    return a.w<b.w;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        p[i]=i;
    }
    for(int i=0;i<m;i++){
        cin>>edges[i].u>>edges[i].v>>edges[i].w;
    }



    sort(edges,edges+m,cmp);

    int res=0,cnt=0;
    for(int i=0;i<m;i++){
        int a=edges[i].u,b=edges[i].v,c=edges[i].w;
        a= find(a);
        b= find(b);
        if(a!=b){
            p[a]=b;
            res+=c;
            cnt++;
        }
    }

    if(cnt<n-1){
        cout<<"orz"<<endl;
    }
    else{
        cout<<res<<endl;
    }
    return 0;
}