#include<bits/stdc++.h>
using namespace std;

string a[25];

bool cmp(string a,string b){
    return a+b>b+a;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n,cmp);
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<endl;
    return 0;
}

