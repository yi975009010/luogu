#include<bits/stdc++.h>
using namespace std;

const int N=25;
int matrix[N][N][N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int w,x,h;
    cin>>w>>x>>h;
    int n;
    cin>>n;
    while(n--){
        int x1,y1,z1,x2,y2,z2;
        cin>>x1>>y1>>z1>>x2>>y2>>z2;
        for(int i=min(x1,x2);i<=max(x1,x2);i++){
            for(int j=min(y1,y2);j<=max(y1,y2);j++){
                for(int k=min(z1,z2);k<=max(z1,z2);k++){
                    matrix[i][j][k]=1;
                }
            }
        }
    }

    int res=0;
    for(int i=1;i<=w;i++){
        for(int j=1;j<=x;j++){
            for(int k=1;k<=h;k++){
                if(matrix[i][j][k]==0) res++;
            }
        }
    }
    cout<<res<<endl;
}