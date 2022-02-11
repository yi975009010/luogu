#include <bits/stdc++.h>
/**
 * [NOIP2015 普及组] 金币——
 *2022/2/11 14:25
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int K,sum=0;   //发放金币的天数
    scanf("%d",&K);
    int i;
    for(i=1;K-i>=0;K-=i++){
        sum+=i*i;
    }
    printf("%d",sum+K*i);
    return 0;
}