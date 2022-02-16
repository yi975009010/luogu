#include <bits/stdc++.h>
/**
 * [NOIP2011 普及组] 统计单词数——AC
 *2022/2/15 17:35
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string a;
    string b;
    getline(cin,a);
    getline(cin,b);
    //转换大小写，可以都转换为大写，或者小写
    for (int i=0;i<a.length();++i){
        if(a[i]!=' '){
            a[i]=tolower(a[i]);
        }
    }
    for (int i=0;i<b.length();++i){
        if(b[i]!=' '){
            b[i]=tolower(b[i]);
        }
    }
    string t=a;
    a=" "+a+" ";
    b=" "+b+" ";
    int cnt=0,res=0;
    string temp="";
    for(int i=0;i<b.size();i++){
        if(b[i]!=' '){
            temp+=b[i];
        }
        else{
            if(temp==t) {
                cnt++;
            }

            temp="";
        }
    }

    res=b.find(a);
    if(res==b.npos){
        cout<<-1<<endl;
    }else{
        cout<<cnt<<" "<<res;
    }

    return 0;
}