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
	ll a,b;
	ll t;
    ll countt[10000];
	cin>>t;
	ll sum=0;
        f0(t)
        {
            cin>>a>>b;
                //if(b>a)
		sum+=(b-a);
		countt[i]=sum;
        }
        sort(countt,countt+t);
        cout<<countt[t-1]<<endl;
       // cout<<abs(sum-t)<<endl;

    return 0;
}
