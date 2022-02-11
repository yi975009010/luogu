#include <bits/stdc++.h>
/**
 * 找最小值——AC
 *2022/2/11 10:42
 */
using namespace std;

const int N=110;
int a[N];
int n,Min_Num=1e9;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        if(a[i]<Min_Num){
            Min_Num=a[i];
        }
    }
    cout<<Min_Num<<endl;

    return 0;
}