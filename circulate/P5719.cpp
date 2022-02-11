#include <bits/stdc++.h>
/**
 * P5719分类平均——AC
 *2022/2/11 10:58
 */
using namespace std;

int n,k,sum1,sum2,cnt1,cnt2;
double avg1,avg2;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    cin>>n>>k;
    for(int i=1;i<=n;i++){
        if(i%k==0){
            sum1+=i;
            cnt1++;
        }
        else{
            sum2+=i;
            cnt2++;
        }
    }
    avg1=(sum1+0.0)/cnt1;
    avg2=(sum2+0.0)/cnt2;

    cout<<fixed<<setprecision(1)<<avg1<<" "<<avg2;

    return 0;
}