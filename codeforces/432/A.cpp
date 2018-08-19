#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll n,m,ymax=5,i;
	cin>>n>>m;
	ll count = 0;
        ll y[n];
    f1(i,n)
    {
        cin>>y[i];
        //cout<<y<<" ";
        if(ymax - y[i] >=m) count++;

    }

    cout<<count/3<<endl;

    return 0;
}