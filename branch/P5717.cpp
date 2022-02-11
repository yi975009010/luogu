#include <bits/stdc++.h>
/**
 * 三角形分类——
 *2022/2/11 9:57
 */
using namespace std;

int d[3];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    cin>>d[0]>>d[1]>>d[2];
    sort(d,d+3);
    if((d[0]+d[1])<=d[2]){
        cout<<"Not triangle"<<endl;
    }
    else{
        if((d[0]*d[0]+d[1]*d[1])>(d[2]*d[2])){
            cout<<"Acute triangle"<<endl;
            if((d[0]==d[1]) || d[0] ==d[2] || d[1]==d[2]){
                cout<<"Isosceles triangle"<<endl;
            }
            if(d[0]==d[1] && d[1]==d[2]){
                cout<<"Equilateral triangle"<<endl;
            }
        }
        else if((d[0]*d[0]+d[1]*d[1])==(d[2]*d[2])){
            cout<<"Right triangle"<<endl;
            if((d[0]==d[1]) && d[0]<d[2]){
                cout<<"Isosceles triangle"<<endl;
            }
        }
        else{
            cout<<"Obtuse triangle"<<endl;
            if((d[0]==d[1]) && d[0]<d[2]){
                cout<<"Isosceles triangle"<<endl;
            }
        }
    }
    return 0;
}