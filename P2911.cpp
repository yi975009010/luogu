#include<bits/stdc++.h>
using namespace std;

int a[21],b[21],c[41],d[100];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int s1,s2,s3;
    cin>>s1>>s2>>s3;


    for(int i=1;i<=s1;i++){
        for(int j=1;j<=s2;j++){
            for(int k=1;k<=s3;k++){
                d[i+j+k]++;
            }
        }
    }
    int max=0,index=-1;
    for(int i=0;i<100;i++){
        if(d[i]>max) max=d[i],index=i;
    }
    cout<<index<<endl;
}