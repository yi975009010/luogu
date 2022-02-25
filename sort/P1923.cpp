#include <bits/stdc++.h>
/**
 *2022/2/25 10:26
 */
using namespace std;

const int N=5000010;
int n,k;
int q[N];
int quick_sort(int q[], int l, int r, int k)
{
    if (l >= r) return q[l];

    int i = l - 1, j = r + 1, x = q[l + r >> 1];
    while (i < j)
    {
        do i ++ ; while (q[i] < x);
        do j -- ; while (q[j] > x);
        if (i < j) swap(q[i], q[j]);
    }

    if (j - l + 1 >= k) return quick_sort(q, l, j, k);
    else return quick_sort(q, j + 1, r, k - (j - l + 1));
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;

    for(int i=1;i<=n;i++){
        cin>>q[i];
    }

    int res=quick_sort(q,1,n,k+1);
    cout<<res<<endl;
    return 0;
}