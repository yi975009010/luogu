#include <bits/stdc++.h>

/**
 * 进制转换——AC
 *
 */
using namespace std;
string tt[16]={"0","1","2","3","4","5","6","7","8","9","A","B","C","D","E","F"};
string changeTo(int a,string s,int b){
    int temp=0,j=0;

    //将数据转化为十进制
    for(int i=s.size()-1;i>=0;i--){
        if(s[i]>='A' && s[i]<='F'){
            temp+=(s[i]-55)*pow(a,j);
        }
        else if(s[i]>='0' && s[i]<='9'){
            temp+=(s[i]-'0')* pow(a,j);
        }
        j++;
    }

    string res="";
    while(temp){
        int t=temp%b;
        temp=temp/b;
        res+= tt[t];
    }
    reverse(res.begin(),res.end());
    return res;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int k1,k2;   //k1表示待转换数的进制，k2表示需要转换到的进制数
    string s;    //s表示待转换数
    cin>>k1>>s>>k2;

    cout<<changeTo(k1,s,k2);
    return 0;
}