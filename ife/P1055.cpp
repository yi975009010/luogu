#include <bits/stdc++.h>
/**
 * [NOIP2008 普及组] ISBN 号码——
 *2022/2/10 16:03
 */
using namespace std;

char mod[12] = "0123456789X";
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin>>s;
    int sum=0,check;
    int len=s.size();
    for(int i=0,j=1;i<len&j<=9;i++){
        if(isdigit(s[i])){
            sum+=(s[i]-'0')*j;
            j++;
        }
        else if(s[i]='-'){
            continue;
        }
    }
    sum=sum%11;
    if(s[len-1]==mod[sum]){
        cout<<"Right"<<endl;
    }else{
        s[len-1]=mod[sum];
        cout<<s;
    }
    return 0;
}