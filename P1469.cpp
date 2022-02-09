#include<bits/stdc++.h>

/*
 * 数筷子——AC
 * */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    int ans = 0;
    cin>>n;
    for (int i = 0; i < n; i++) {
        int x;
        cin>>x;
        ans ^= x;
    }
    cout<<ans<<endl;
    return 0;
}