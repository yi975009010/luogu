#include <bits/stdc++.h>
/**
 *  [NOIP2005 普及组] 校门外的树——
 *2022/2/14 10:21
 */
using namespace std;

const int N=1e4+10;
int a[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int l,m,ans=0;
    cin>>l>>m;

    for(int i=1;i<=m;i++){
        int x,y;
        cin>>x>>y;
        for(int j=x;j<=y;j++){
            a[j]=1;
        }
    }

    for(int i=0;i<=l;i++){
        if(a[i]==0){
            ans++;
        }
    }
    cout<<ans<<endl;
    return 0;
}