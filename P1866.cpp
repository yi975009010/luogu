#include <bits/stdc++.h>
/**
 * 编号
 *2022/2/9 11:06
 */
using namespace std;

const int mod=1000000007;
long long  sum=1;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> pr(n);
    for(int i=0;i<n;i++){
        cin>>pr[i];
    }

    sort(pr.begin(),pr.end());
    for(int i=0,j=0;i<n;i++,j++){
        sum*=pr[i]-j;
        sum=sum%mod;
    }
    cout<<sum<<endl;
    return 0;
}