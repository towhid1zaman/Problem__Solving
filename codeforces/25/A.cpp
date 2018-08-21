#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll n,x;
    cin>>n;
    ll O[n],o=0;
    ll E[n],e=0;
    f0(n)
    {
        cin>>O[i];
    }

    f0(n)
    {
        if(O[i]&1) o++;
    }
    if(o==1)
    {
        f0(n)if(O[i]&1) cout<<i+1<<endl;
    }

    else
    {
        f0(n)if((O[i]&1)==0) cout<<i+1<<endl;
    }
    return 0;
}
