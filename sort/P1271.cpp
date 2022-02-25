#include <bits/stdc++.h>
/**
 * 【深基9.例1】选举学生会
 *2022/2/25 9:35
 */
using namespace std;

const int N=2e6+10;
int a[N];
int n,m;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>m;

    for(int i=1;i<=m;i++){
        cin>>a[i];
    }
    sort(a+1,a+1+m);

    for(int i=1;i<=m;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}