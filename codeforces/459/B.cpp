
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n;
    cin>>n;
    vector<LL>v(n);
    for(LL i = 0; i<n;i++){
        cin>>v[i];
    }
    LL cnt = 0; LL cnt2 = 0;
    LL mn = *min_element(v.begin(),v.end());
    LL mx = *max_element(v.begin(),v.end());
            for(LL i = 0; i<n;i++){
                cnt+=(v[i]==mn);
                cnt2+=(v[i]==mx);
            }
            cout<<abs(mn - mx)<<" ";
            if(mn==mx){
                cout<<n*(n-1) /2<<endl;
            }
            else cout<<cnt2*cnt<<endl;

    return 0;
}
