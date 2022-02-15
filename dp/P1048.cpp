#include <bits/stdc++.h>
/**
 * 采药——简单背包问题
 *2022/2/15 10:42
 */
using namespace std;

const int N=110,M=1010;
int a[N],b[N];
int f[M];
int n,m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>m>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i]>>b[i];
    }

    for(int i=1;i<=n;i++){    //枚举n个物品
        for(int j=m;j>=a[i];j--){
            if(j>=a[i]){
                f[j]=max(f[j],f[j-a[i]]+b[i]);
            }
        }
    }
    cout<<f[m]<<endl;
    return 0;
}