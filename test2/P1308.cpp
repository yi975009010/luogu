#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);

    for(int i=0;i<s1.size();i++){
        s1[i]= tolower(s1[i]);
    }

    for(int i=0;i<s2.size();i++){
        if(s2[i]!=' '){
            s2[i]= tolower(s2[i]);
        }
        else{
            continue;
        }
    }
    string t=s1;
    int cnt=0,res=0;
    s1=" "+s1+"";
    s2=" "+s2+" ";
    string temp="";
    for(int i=0;i<s2.size();i++){
        if(s2[i]!=' '){
            temp+=s2[i];
        }
        else{
            if(temp==t){
                cnt++;
            }
            temp="";
        }
    }

    res=s2.find(s1);
    if(res==s2.npos){
        cout<<-1<<endl;
    }else{
        cout<<cnt<<" "<<res;
    }

    return 0;
}

