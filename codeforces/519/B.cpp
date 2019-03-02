#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
 int table[101][101];
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            LL n;
            cin>>n;
            vector<LL>v1(n),v2(n-1),v3(n-2);
            LL sum1 = 0, sum2 = 0, sum3 = 0;
            for(int i = 0; i<n;i++){
                cin>>v1[i];
                sum1 +=v1[i];
            }
            for(int i = 0; i<n-1; i++){
                cin>>v2[i];
                sum2 +=v2[i];
            }
            for(int i = 0; i<n-2; i++){
                cin>>v3[i];
                sum3 += v3[i];
            }
            cout<<abs(sum1 - sum2)<<endl;
            cout<<abs(sum2 - sum3)<<endl;

    return 0;
}




