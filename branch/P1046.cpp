#include <bits/stdc++.h>
/**
 * [NOIP2005 普及组] 陶陶摘苹果——AC
 *2022/2/11 9:51
 */
using namespace std;

const int chair=30;
int a[10];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=0;i<10;i++){
        cin>>a[i];
    }
    int n,cnt=0;
    cin>>n;
    int sum=n+chair;

    for(int i=0;i<10;i++){
        if(sum>=a[i]){
            cnt++;
        }
    }
    cout<<cnt<<endl;
    return 0;
}