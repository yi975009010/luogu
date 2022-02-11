#include <bits/stdc++.h>
/**
 *
 * 数的性质——AC
 *2022/2/10 13:46
 */
using namespace std;

int a[5];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n%2==0 && (n>=4&& n<=12)){
        a[1]++;
    }
    if(n%2==0 || (n>=4&& n<=12)){
        a[2]++;
    }
    if((n%2==0  && (n<4 || n>12))  || (n%2!=0 && (n>=4&& n<=12))){
        a[3]++;
    }
    if(n%2!=0 && (n<4 || n>12)){
        a[4]++;
    }

    for(int i=1;i<=4;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}