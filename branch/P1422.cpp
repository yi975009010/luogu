#include <bits/stdc++.h>
/**
 * 小玉家的电费
 *2022/2/10 17:27
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    double sum=0.0;
    if(n<=150){
        sum=n*0.4463;
    }
    else if(n>150 && n<=400){
        sum=150*0.4463+(n-150)*0.4663;
    }
    else{
        sum=150*0.4463+250*0.4663+(n-400)*0.5663;
    }
    cout<<fixed<<setprecision(1)<<sum<<endl;
    return 0;
}