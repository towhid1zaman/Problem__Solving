#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

LL  n;
vector<LL >v;
int main()
{

   cin>>n;
   for(LL  i = 0; i<n;i++)
   {
       LL x;
       cin>>x;
       v.push_back(x);
   }
   LL tmp = 2e9;
   LL ans = 0;
   reverse(v.begin(),v.end());
    for(LL i = 0; i<n;i++)
    {
        if(!tmp)break;
        LL y = min(v[i],tmp-1);
        ans+=y;
        tmp =y;
    }
    cout<<ans<<endl;

     return 0;
}


