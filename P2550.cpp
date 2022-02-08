#include<bits/stdc++.h>
using namespace std;

int a[34],b[8];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;

    //输入中奖号码
    for(int i=1;i<=7;i++){
        int temp;
        cin>>temp;
        a[temp]++;
    }

    while(n--){
        int sum=0;
        for(int i=1;i<=7;i++){
            int k;
            cin>>k;
            if(a[k]!=0) sum++;
        }
        b[sum]++;
    }
    for(int i=7;i>=1;i--){
        cout<<b[i]<<" ";
    }


    return 0;
}