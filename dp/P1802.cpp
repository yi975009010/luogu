#include <bits/stdc++.h>
/**
 * 5倍经验日——AC
 *2022/2/15 11:14
 */
using namespace std;

typedef long long ll;
const int N=1e3+10,M=1e6+10;
int n,x;
ll a[N],b[N],c[N];
ll f[M];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>x;

    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i]>>c[i];
    }

    for(int i=1;i<=n;i++){  //枚举所有好友
        //枚举用药能打过的最大值
        for(int j=x;j>=c[i];j--){
            f[j]=max(f[j]+a[i],f[j-c[i]]+b[i]);
        }

        //枚举不用药打过的最大值
        for(int j=c[i]-1;j>=0;j--){
            f[j]+=a[i];
        }
    }

    cout<<5*f[x]<<endl;
    return 0;
}