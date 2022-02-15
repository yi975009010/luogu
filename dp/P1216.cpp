#include <bits/stdc++.h>
/**
 *
 * [USACO1.5][IOI1994]数字三角形 Number Triangles——AC
 *2022/2/15 9:21
 */
using namespace std;

const int N=1010,INF=1e9;
int matrix[N][N];
int f[N][N];
int n;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cin>>matrix[i][j];
        }
    }

    //初始化状态
    for(int i=0;i<=n;i++){
        for(int j=0;j<=i+1;j++){
            f[i][j]=-INF;
        }
    }

    f[1][1]=matrix[1][1];
    for(int i=2;i<=n;i++){
        for(int j=1;j<=i;j++){
            f[i][j]=max(f[i-1][j-1]+matrix[i][j],f[i-1][j]+matrix[i][j]);
        }
    }

    int res=-INF;
    //遍历最后一行
    for(int i=1;i<=n;i++){
        res=max(res,f[n][i]);
    }
    cout<<res<<endl;
    return 0;
}