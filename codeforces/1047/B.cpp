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
	ll  a,b;
	ll ara[n];
        f0(n)
        {
            cin>>a>>b;
                ara[i] = a+b;
        }
        sort(ara,ara+n);
        cout<<ara[n-1]<<endl;



    return 0;
}
