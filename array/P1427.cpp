#include <bits/stdc++.h>
/**
 * 小鱼数字游戏——AC
 *2022/2/14 9:50
 */
using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    vector<int> pr;
    while(1){
        int x;
        cin>>x;
        if(x==0) break;

        pr.push_back(x);
    }

    for(int i=pr.size()-1;i>=0;i--){
        cout<<pr[i]<<" ";
    }
    cout<<endl;


    return 0;
}