#include <bits/stdc++.h>
/**
 * 有 n 个石头，编号从 1 到 n，第 i 个石头的高度为 hi。一只青蛙最开始
 * 在 1 号石头上，它想要跳到 n 号石头上，它可以从第 i 块石头跳到第 i + 1
 * 块石头或者第 i + 2 块石头上，从石头 i 跳到石头 j 需要耗费 |hi − hj | 的体
 * 力，计算它跳到石头 n 最少耗费的体力。
 *2022/2/15 14:30
 */
using namespace std;

const long long INF=1e9;
const int N=1e5+10;
int h[N];
long long dp[N];
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    for(int i=0;i<=n+1;i++){
        dp[i]=INF;
    }
    dp[1]=0;
    for(int i=2;i<=n;i++){
        dp[i]=min(dp[i],dp[i-1]+abs(h[i]-h[i-1]));
        if(i>2) dp[i]=min(dp[i],dp[i-2]+abs(h[i]-h[i-2]));
    }

    cout<<dp[n];
    return 0;
}