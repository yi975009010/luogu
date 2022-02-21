#include<bits/stdc++.h>
using namespace std;

const int N=510;
int p[N];
int n,m;
struct Edge{
    int u,v;
    double w;
}edges[N];

bool cmp(Edge a,Edge b){
    return a.w>b.w;
}
vector<pair<int,int>> position;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int x,y;
        cin>>x>>y;
        position.push_back({x,y});
    }
    return 0;
}

