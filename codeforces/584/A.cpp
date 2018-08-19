#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	ll i, n,t,count = 0;
	cin>>n>>t;
    if(n==1 and t==10)
    {
       cout<< "-1" <<endl;
        }
    else{
        cout<<t;
        if(t==10)
        {
            for(int i = 0; i < n - 2; i++)
                cout << 0;
      }
      else
        for(int i = 0; i < n - 1; i++)
            cout << 0;
        }
    return 0;
}
