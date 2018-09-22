#include<bits/stdc++.h>
using namespace std;


#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
	NFS
	ll n;
	cin>>n;
        ll x = n - 2;
            if(x%3==0)
            {

                cout<<"1 "<<"2 "<<n-3<<endl;
            }
            else
                cout<<"1 "<<"1 "<<x<<endl;

    return 0;
}