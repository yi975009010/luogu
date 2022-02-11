#include <bits/stdc++.h>
/**
 * 不高兴的津津——AC
 *2022/2/10 15:13
 */
using namespace std;

int a[8],b[8];
vector<pair<int,int>> pr;

bool cmp(pair<int,int> a,pair<int,int> b){
//    if(a.first!=b.first) return a.second<b.second;
    return a.first>b.first;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    for(int i=1;i<=7;i++){
        cin>>a[i]>>b[i];
        pr.push_back({a[i]+b[i],i});
    }

    sort(pr.begin(),pr.end(),cmp);
//    for(int i=0;i<pr.size();i++){
//        cout<<pr[i].first<<" "<<pr[i].second<<endl;
//    }

    if(pr[0].first<=8){
        cout<<0<<endl;
    }
    else{
        cout<<pr[0].second<<endl;
    }
    return 0;
}