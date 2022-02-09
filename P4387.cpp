#include <bits/stdc++.h>
/**
 * 验证栈序列——
 *2022/2/9 14:49
 */
using namespace std;
const int N=1e5+10;
int a[N],b[N];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int T;
    cin>>T;
    while(T--){
        int n,cnt=1;
        cin>>n;
        stack<int> stk;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }

        for(int i=1;i<=n;i++){
            cin>>b[i];
        }

        for(int i=1;i<=n;i++){
            stk.push(a[i]);
            while(stk.top()==b[cnt]) {
                stk.pop();
                cnt++;
                if(stk.empty()) break;
            }
        }
        if(stk.empty()) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}