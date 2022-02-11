#include <bits/stdc++.h>
/**
 * 级数求和
 *2022/2/11 14:14
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k,j=1;
    double Sn=0.0;
    cin>>k;
    while(1){
        Sn+=(1/(j+0.0));
        if(Sn>k) break;
        j++;
    }
    cout<<j<<endl;
    return 0;
}