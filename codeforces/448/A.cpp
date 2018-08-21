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
	ll a1,a2,a3,b1,b2,b3,n;
        cin>>a1>>a2>>a3;
        cin>>b1>>b2>>b3;
        cin>>n;
    /*    if(a1>=n and a2>=n and a3>=n and b1>=n and b2>=n and b3>=n)
            cout<< "YES"<<endl;
        if((a1+a2+a3)==(b1+b2+b3) and (b1+b2+b3 )==n) cout<< "NO"<<endl;
        if(a1+a2+a3 >5) cout<< "NO" <<endl;
        if(b1+b2+b3 >10) cout<< "NO" <<endl;
        else
            cout<<"YES"<<endl; */
    ll a = a1+a2+a3;
    ll b = b1+b2+b3;
      a+=4;
      b+=9;
      ll c = a/5;
      ll d = b/10;
        ll result = c+d;
        //cout<<result<<endl;
        if(result<=n)
            cout<< "YES"<<endl;
        else
            cout<< "NO" <<endl;

    return 0;
}