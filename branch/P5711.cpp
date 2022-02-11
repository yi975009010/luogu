#include <bits/stdc++.h>
/**
 * 闰年判断——AC
 *2022/2/10 13:59
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int year;
    cin>>year;
    if(year<1582) cout<<0<<endl;
    else{
        if(year%4==0 && year%100!=0){
            cout<<1<<endl;
        }
        else if(year%400==0){
            cout<<1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}