#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll  n;
	cin>>n;
	ll x[n+1];
	 ll counter = 0;
	for(ll i = 0; i<n;i++)
    {
        cin>>x[i];
    }
    ll max = x[0], min = x[0];
    for(ll i = 1; i<n; i++)
    {
       if(x[i]>max)
       {
           max=x[i];
           counter++;
       }
       if(x[i]<min)
       {
           min = x[i];
           counter ++;
       }

    }
    cout<<counter<<endl;
    return 0;
}
