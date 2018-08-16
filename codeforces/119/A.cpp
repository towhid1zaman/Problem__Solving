#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll a,b,n,i=0;
	cin>>a>>b>>n;
	while(n)
    {
        if(i%2==0)
        {
            n-=__gcd(a,n);
        }
        else
            n-=__gcd(b,n);

        i++;
    }
    i--;
    cout<<i%2<<endl;

    return 0;
}