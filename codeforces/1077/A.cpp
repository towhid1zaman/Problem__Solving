#include<bits/stdc++.h>
using namespace std;

#define s scanf
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
#define nl '\n'

#define scl(x) scanf("%lld",&x)
#define scl2(x,y) scanf("%lld %lld",&x,&y)
#define scl3(x,y,z) scanf("%lld %lld %lld",&x,&y,&z)
//long long lcm = (x*y)/(__gcd(x,y));
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

	NFS
    ll k,a,b,c;
    scl(k);
        for(int i = 0; i<k;i++)
        {
            scl3(a,b,c);
             cout << (a - b)*(c / 2) + (c % 2)*a<<nl;
        }




    return 0;
}
