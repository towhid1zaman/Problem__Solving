#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define 	RL(x) 		scanf("%lld",&x)
#define 	R(x) 		scanf("%d",&x)
#define 	pb     		push_back
#define 	lcm(a,b)       	a * (b / gcd(a, b))
#define 	gcd(a,b)       	__gcd(a,b)
#define 	nl 		"\n"
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int n;
            R(n);
            vector<int>v(n);
            for(int i = 1; i<=n;i++)
            {
                R(v[i]);
            }
            int ans = 0;
            for(int i = 1; i<=n;i++)
            {
                if(v[i]==1)ans++;
                else break;
            }
            for(int i =n; i>=1;i--)
            {
                if(v[i]==1)ans++;
                else break;
            }
            //cout<<ans<<nl;
            int cnt = 0,mx = 0;
            for(int i = 1; i<=n;i++)
            {
                if(v[i]==1)cnt++;
                else cnt = 0;
                mx = max(mx,cnt);
            }
            //cout<<mx<<nl;

                cout<<max(ans,mx)<<nl;

     return 0;
}
