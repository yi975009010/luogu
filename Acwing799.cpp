//
// Created by lenovo on 2022/1/7.
//
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
int a[N],s[N];
int n;
int main(){
    scanf("%d",&n);
    for(int i=0;i<n;i++) scanf("%d",&a[i]);
    int res=0;
    for(int i=0,j=0;i<n;i++){
        s[a[i]]++;
        while(s[a[i]]>1) s[a[j++]]--;
        res=max(res,i-j+1);
    }

    printf("%d ",res);
    return 0;
}
