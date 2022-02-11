#include <bits/stdc++.h>
/**
 * 数列求和
 *2022/2/11 16:28
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,sum=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    cout<<sum<<endl;
    return 0;
}