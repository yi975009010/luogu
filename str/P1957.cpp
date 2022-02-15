#include <bits/stdc++.h>
/**
 * 口算练习题——AC
 *2022/2/15 16:13
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    string temp;
    for(int i=1;i<=n;i++){
        string str,res="";
        int b,c;
        cin>>str>>b;
        if(isdigit(str[0])){
            if(temp=="a"){
                int sum=atoi(str.c_str())+b;
                res= str+ "+" +to_string(b)+"="+ to_string(sum);
                cout<<res<<endl<<res.size()<<endl;
            }
            else if(temp=="b"){
                int sub=atoi(str.c_str())-b;
                res= str + "-" +to_string(b)+"="+ to_string(sub);
                cout<<res<<endl<<res.size()<<endl;
            }
            else if(temp=="c"){
                int mul=atoi(str.c_str())*b;
                res= str+ "*" +to_string(b)+"="+to_string(mul);
                cout<<res<<endl<<res.size()<<endl;
            }
        }else{
            temp=str;
            cin>>c;
            if(str=="a"){
                int sum=b+c;
                res= to_string(b)+ "+" +to_string(c)+"="+to_string(sum);
                cout<<res<<endl<<res.size()<<endl;
            }
            else if(str=="b"){
                int sub=b-c;
                res= to_string(b)+ "-" +to_string(c)+"="+to_string(sub);
                cout<<res<<endl<<res.size()<<endl;
            }
            else if(str=="c"){
                int mul=b*c;
                res= to_string(b)+ "*" +to_string(c)+"="+to_string(mul);
                cout<<res<<endl<<res.size()<<endl;
            }
        }
    }
    return 0;
}