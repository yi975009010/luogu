#include <bits/stdc++.h>
/**
 * 计数问题——AC
 *2022/2/11 14:01
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,k,cnt=0;
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        int temp=i;
        while(temp){
            if((temp%10)==k){
                cnt++;
            }
            temp/=10;
        }
    }

    cout<<cnt<<endl;
    return 0;
}