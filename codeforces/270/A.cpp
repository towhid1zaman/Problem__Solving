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
	ll n;
	cin>>n;
	ll x;
            f0(n)
            {
                cin>>x;
               // ll a = n -2;
                //l b = 180/ n;
                if(360%(180-x)==0)
                    cout<<"YES"<<endl;
                else
                    cout<<"NO"<<endl;

            }

    return 0;
}


