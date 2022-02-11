#include <bits/stdc++.h>
/**
 * 【深基4.例6】数字直角三角形——AC
 *2022/2/11 11:25
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=i;j<=n;j++){
            ans++;
            if(ans<10){
                cout<<0;
            }
            cout<<ans;
        }
        cout<<endl;
    }
    return 0;
}