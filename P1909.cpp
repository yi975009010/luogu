//
// Created by lenovo on 2022/1/12.
//
#include<bits/stdc++.h>
using namespace std;


int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,sum=0,price=1e10;    //表示铅笔数量
    cin>>n;
    for(int i=0;i<3;i++){
        int k,m;
        cin>>k>>m;
        int temp=0;
        if(n%k!=0){
            temp=n/k+1;
        }
        else{
            temp=n/k;
        }
        sum=m*temp;
        if(sum<price){
            price=sum;
        }
    }
    cout<<price<<endl;
    return 0;

}

