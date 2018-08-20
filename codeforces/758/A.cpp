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
	ll n,x;
	cin>>n;
	ll a[n];
	ll sum = 0;
        for(ll i=0;i<n;i++)
            {
                cin>>a[i];
                //sum+=a[i];
            }
//            if(sum>n)
//                cout<<sum<<endl;
//                if(sum<n)
//                    cout<<n-sum<<endl;

            sort(a,a+n);
            ll max = a[n-1];
            for(int i = 0; i<n ; i++)
            {
                sum += max - a[i];
            }
            cout<<sum<<endl;

    return 0;
}

