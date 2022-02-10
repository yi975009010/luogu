#include <bits/stdc++.h>
/**
 * 洛谷团队系统——AC
 *2022/2/10 14:08
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    int sum1=5*n;
    int sum2=3*n+11;

    if(sum1<sum2){
        cout<<"Local"<<endl;
    }
    else{
        cout<<"Luogu"<<endl;
    }
    return 0;
}