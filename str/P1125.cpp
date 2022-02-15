#include <bits/stdc++.h>
/**
 * [NOIP2008 提高组] 笨小猴——AC
 *2022/2/15 15:56
 */
using namespace std;

const int INF=1e9;
int a[60];

bool is_prime(int n){
    if(n<2) return false;
    for(int i=2;i<n/i;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        a[s[i]-'A']++;
    }
    int maxN=-INF,minN=INF;
    for(int i=0;i<60;i++){
        if(a[i]>maxN){
            maxN=a[i];
        }
        if(a[i]<minN && a[i]!=0){
            minN=a[i];
        }
    }
    if(is_prime(maxN-minN)){
        cout<<"Lucky Word"<<endl<<maxN-minN<<endl;
    }
    else{
        cout<<"No Answer"<<endl<<0<<endl;
    }
    return 0;
}