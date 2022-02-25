#include <bits/stdc++.h>
/**
 *2022/2/25 14:16
 */
using namespace std;

struct node{
    int id;
    string vote;
}s[25];
int n;

bool cmp(node a,node b){
    if(a.vote.size()!=b.vote.size()){
        return a.vote.size()>b.vote.size();
    }
    return a.vote>b.vote;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>s[i].vote;
        s[i].id=i;
    }
    sort(s+1,s+1+n,cmp);
    cout<<s[1].id<<endl<<s[1].vote<<endl;
    return 0;
}