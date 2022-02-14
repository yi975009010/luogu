#include <bits/stdc++.h>
/**
 * 小鱼比可爱——AC
 *2022/2/14 9:34
 */
using namespace std;

const int N=110;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    a[0]=1e9;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }

    for(int i=n;i>=1;i--){
        for(int j=1;j<i;j++){
            if(a[i]>a[j]) b[i]++;
        }
    }

    for(int i=1;i<=n;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    return 0;
}