#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

ll cal(int n){
    ll sum=1;
    while(n){
        sum*=n;
        n--;
    }
    return sum;
}
void divide(ll x){
    for(ll i=2;i<x/i;i++){
        if(x%i==0){
            int s=0;
            while(x%i==0){
                x/=i;
                s++;
            }
            cout<<i<<" "<<s<<endl;
        }
    }
    if(x>1) cout<<x<<' '<<1<< endl;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    auto res= cal(n);
    divide(res);
    return 0;
}