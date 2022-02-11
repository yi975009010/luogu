#include <bits/stdc++.h>
/**
 *2022/2/11 9:42
 */
using namespace std;

typedef long long ll;
ll a[3];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a[0]>>a[1]>>a[2];
    sort(a,a+3);
    cout<<a[0]/__gcd(a[0],a[2])<<"/"<<a[2]/__gcd(a[0],a[2]);
    return 0;
}

