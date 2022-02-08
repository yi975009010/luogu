#include<bits/stdc++.h>
using namespace std;

/*
 * 梦中的统计——AC
 * */
int a[10];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int m,n;
    cin>>m>>n;
    for(int i=m;i<=n;i++){
        int temp=i;
        while(temp){
            int k=temp%10;
            a[k]++;
            temp=temp/10;
        }
    }

    for(int i=0;i<10;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}