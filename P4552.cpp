//
// Created by lenovo on 2022/1/6.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N],b[N];
int n;
void insert(int l,int r,int c){
    b[l]+=c;
    b[r+1]-=c;
}
int main(){
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        insert(i,i,a[i]);   //构造差分数组b
    }




    return 0;
}

