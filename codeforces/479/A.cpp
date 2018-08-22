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
	ll a1[5];
        int a,b,c;
        cin>>a>>b>>c;
        a1[0] = a+b*c;
        a1[1] = a*(b+c);
        a1[2] = a*b*c;
        a1[3] = (a+b)*c;
        a1[4] = a+b+c;
        sort(a1,a1+5);
        cout<<a1[4]<<endl;

    return 0;
}
