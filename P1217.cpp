#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e8+50;
bool is_prime[N];
vector<ll> Seive(ll up,ll down){
    vector<ll> prim;
    for(int i=down;i<=up;i++){
        is_prime[i]=1;
    }
    is_prime[1]=0;  //1不是素数
    for(ll i=down;i<=up;i++){
        if(is_prime[i]){
            prim.push_back(i);
            for(ll j=2*i;j<=up;j+=i){
                is_prime[j]=0;
            }
        }

    }
    return prim;
}

bool huiwen(ll n){
    ll temp=n,r=0;
    while(n){
        r=r*10+n%10;
        n=n/10;
    }
    if(r==temp) return true;
    return false;
}
int main(){
    ll n,m;
    cin>>n>>m;
    vector<ll> pr=Seive(m,1);
    for(int i=0;i<pr.size();i++){
        if(huiwen(pr[i]) && pr[i]>=n &&  pr[i]<=m){
            cout<<pr[i]<<endl;
        }
    }

}

