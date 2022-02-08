#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N=1e6+10;
const int M=1e5+10;
int A[N],B[M];
int Binary_Serach(int A[],int low,int high,int key){
    int mid;
    while(low<high){
        mid=low+(high-low)/2;
        if(A[mid] >= key) high=mid;   //如果找到则返回元素所在位置
        else low=mid+1;
    }
    if(A[low]==key) return low;
    return -1;    //若没有找到，则返回-1
} 

int main(){
    int n,m;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        cin>>A[i];
    }
    for(int i=1;i<=m;i++){
        cin>>B[i];
    }
    for(int i=1;i<=m;i++){
        cout<<Binary_Serach(A,1,n,B[i])<<" ";
    }
    cout<<endl;
    return 0;
} 