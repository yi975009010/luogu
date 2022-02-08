#include <bits/stdc++.h>

using namespace std;
/*
 *
 * 压缩技术——AC
 * */
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string res;
    int n;
    cin>>n;
    int sum=0,ans=0;
    while(sum<(n*n)){
        int k;
        cin>>k;
        if(ans%2==0){
            for(int j=0;j<k;j++){
                res+= to_string(0);
            }
        }
        else{
            for(int j=0;j<k;j++){
                res+= to_string(1);
            }
        }
        ans++;
        sum+=k;
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i];
        if((i+1)%n==0) cout<<endl;
    }
    return 0;
}