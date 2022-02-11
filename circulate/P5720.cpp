#include <bits/stdc++.h>
/**
 * 【深基4.例4】一尺之棰——AC
 *2022/2/11 11:18
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,cnt=1;
    cin>>n;
    while(n!=1){
        n/=2;
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}