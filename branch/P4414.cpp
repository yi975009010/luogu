#include <bits/stdc++.h>
/**
 *2022/2/11 10:25
 */
using namespace std;

int a[3];
char A,B,C;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>a[0]>>a[1]>>a[2];
    cin>>A>>B>>C;
    sort(a,a+3);
    cout<<a[A-'A']<<" "<<a[B-'A']<<" "<<a[C-'A'];
    return 0;
}

