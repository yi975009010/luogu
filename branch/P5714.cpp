#include <bits/stdc++.h>
/**
 *2022/2/10 14:12
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    double m,h;
    cin>>m>>h;
    double res=m/(h*h);
    if(res<18.5){
        cout<<"Underweight"<<endl;
    }
    else if(res>=18.5 && res<24){
        cout<<"Normal"<<endl;
    }
    else{
        cout<<res<<endl<<"Overweight"<<endl;
    }
    return 0;
}