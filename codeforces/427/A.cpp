#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n, a,sum=0,un=0;
	cin>>n;
	for(ll i= 0; i<n;i++)
            {

                 cin>>a;
                    if(a != -1)
                        sum+=a;
                    else 
                        {
                            if(sum>0)
                            sum--;
                            else
                                un++;
                    }
	}
	cout<<un;
	return 0;

    return 0;
}
