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
	ll t,a,b;
	cin>>t;
	ll cnt = 0;
	f0(t)
	{
	    cin>>a>>b;
	    if(a<b and ( (b-a) >=2))
            cnt++;
	}
    cout<<cnt<<endl;
    return 0;
}
