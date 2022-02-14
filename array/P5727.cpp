#include <bits/stdc++.h>
/**
 * 冰雹猜想——AC
 *2022/2/14 10:07
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    vector<int> pr;
    while(n!=1){
        pr.push_back(n);
        if(n%2==0){
            n/=2;
        }
        else{
            n=n*3+1;
        }
    }
    pr.push_back(1);    //将数字1存入数组
    for(int i=pr.size()-1;i>=0;i--){
        cout<<pr[i]<<" ";
    }
    cout<<endl;
    return 0;
}