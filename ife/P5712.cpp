#include <bits/stdc++.h>
/**
 *
 * Apples——AC
 *2022/2/10 14:03
 */
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin>>n;
    if(n==0){
        cout<<"Today, I ate 0 apple."<<endl;
    }
    else if(n==1){
        cout<<"Today, I ate "<<n<<" apple."<<endl;
    }
    else{
        cout<<"Today, I ate "<<n<<" apples."<<endl;
    }
    return 0;
}