#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(i=0;i<n;i++)
#define f1(j,n) for(j=1;j<=n;j++)
#define f2(j,n) for(j=1;j<=n/2;j++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll t,n;
	//char s [1000];
	string s;
	cin>>t;
        while(t--)
        {
            ll c = 1;
            cin>>n>>s;
                for(ll i = 0 ; i<n/2; i++)
                {
                    if(c==0) break;
                    if(abs(s[i] - s[n-i-1])==1 or abs(s[i] - s[n-i-1]) > 2)
                        c = 0;
                }
                if(c==1) cout<< "YES" <<endl;
                else cout<< "NO" <<endl;
        }
    return 0;
}
