#include<bits/stdc++.h>
using namespace std;

const int N=5e6+10;
int a[N],b[N];
int n,m;
void insert(int l,int r,int c){
    b[l]+=c;
    b[r+1]-=c;
}
int main(){
    int min=1e9;
    scanf("%d%d",&n,&m);
    //输入a数组元素,并构造差分数组b
    for(int i=1;i<=n;i++){
        scanf("%d",&a[i]);
        insert(i,i,a[i]);
    }
    while(m--){
        int l,r,c;
        scanf("%d%d%d",&l,&r,&c);
        insert(l,r,c);
    }

    //求差分数组b的前缀和
    for(int i=1;i<=n;i++){
        b[i]+=b[i-1];
        if(min>b[i]){
            min=b[i];
        }
    }
    printf("%d",min);

    return 0;
}
