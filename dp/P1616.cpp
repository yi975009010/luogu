#include <bits/stdc++.h>
/**
 * 疯狂的采药——(完全背包问题)
 * 二维状态会超内存
 *2022/2/15 9:50
 */
using namespace std;

typedef long long ll;
const int N=1e7+10,M=1e4+10;
int n,m;
int a[M],b[M];
ll f[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;    //n表示时间t,m表示草药数量——相当于m是背包问题中的物品个数,t表示背包问题中的背包容量
    for(int i=1;i<=m;i++){
        cin>>a[i]>>b[i];    //a[i]表示采摘第i种草药的时间,b[i]表示采摘第i种草药的价值;
    }

    for(int i=1;i<=m;i++){
        for(int j=a[i];j<=n;j++){
            f[j]=max(f[j],f[j-a[i]]+b[i]);
        }
    }
    cout<<f[n];
    return 0;
}