#include <bits/stdc++.h>
/**
 * 月份天数——AC
 *2022/2/10 14:27
 */
using namespace std;

int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int year,month;
    cin>>year>>month;

    if((year%4==0 && year%100!=0) || year%400==0){
        if(month==2){
            cout<<a[month]+1<<endl;
        }
        else{
            cout<<a[month]<<endl;
        }
    }
    else {
        cout<<a[month]<<endl;
    }
    return 0;
}