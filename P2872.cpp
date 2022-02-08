#include <bits/stdc++.h>

using namespace std;

const int N=1010;
int n,m,p[N];
struct Node{
    int x,y;
}node[N];

struct Edge{
    int u,v;
}edges[N];

int find(int x){
    return p[x]==x?p[x]:p[x]=find(p[x]);
}
void kruskal(int m){
    int cnt=m;
    //初始化并查集
    for(int i=1;i<=n;i++){
        p[i]=i;
    }

    for(int i=0;i<m;i++){

    }
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        //输入节点坐标
        cin>>node[i].x>>node[i].y;
    }

    for(int i=1;i<=m;i++){
        //输入边，u，v表示连接的点
        cin>>edges[i].u>>edges[i].v;
    }


    return 0;
}