#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
LL fact(LL x)
{
    LL res = 1;
    for(int i = 1; i<=x;i++)
    {
            res*=i;
    }
    return res;
}
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            LL x,y;
            cin>>x>>y;
            LL  res = min(x,y);
            LL ans = 1;
            for(int i = 1; i<=res;i++)
            {
                ans*=i;
            }
            cout<<ans<<endl;

        return 0;
}

