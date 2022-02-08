//
// Created by lenovo on 2022/1/11.
//
#include<bits/stdc++.h>
using namespace std;

const int t=10;

int main(){

    int s,v;
    scanf("%d%d",&s,&v);
    int temp=0,sum=0;
    if(s%v!=0){
        temp=s/v+1;
    }
    else{
        temp=s/v;
    }
    int h=0,m=0;
    h=temp/60;
    m=h%60;

}