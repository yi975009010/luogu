#include <bits/stdc++.h>
/**
 * [NOIP2006 普及组] 明明的随机数
 *2022/2/25 13:46
 */
using namespace std;

const int N=1010;
int a[N];
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        int x;
        cin>>x;
        if(a[x]){
            continue;
        }
        a[x]++;
        sum++;
    }
    cout<<sum<<endl;

    for(int i=1;i<1010;i++){
        if(a[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;

    return 0;
}