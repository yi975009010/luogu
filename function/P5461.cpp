#include<bits/stdc++.h>
using namespace std;

const int N=1500;
int a[N][N];


void release(int x,int l,int r){
    if(x==2){
        a[l][r]=0;
        return ;
    }

    for(int i=1;i<l+x/2-1;i++){
        for(int j=r;j<=r+x/2-1;j++){
            a[i][j]=0;
        }
    }

    release(x/2,l+x/2,r);
    release(x/2,l+x/2,r+x/2);
    release(x/2,l,r+x/2);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n,x;
    cin>>n;
    x=pow(2,n);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            a[i][j]=1;   //初始化矩阵
        }
    }

    release(x,1,1);
    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}