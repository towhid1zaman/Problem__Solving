#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
const double pi= acos(-1);

template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}

int toInt(string s){int sm;stringstream ss(s);ss>>sm;return sm;}
int toLlint(string s){long long int sm;stringstream ss(s);ss>>sm;return sm;}
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	
	ll s,n;
    pair<ll,ll> a[1000];ll c=0;
    cin>>s>>n;
    for(ll i=0;i<n;i++)
    {
        cin>> a[i].first >>a[i].second;
    }
    sort(a,a+n);
    for(ll i=0;i<n;i++)
    {
        if(s<=a[i].first)
        {c=1;break;}
        else
        s+=a[i].second;
    }
    	//cout<<c<<endl;
    if(c!=0)
	{
		cout<<"NO"<<endl;
	}
    else
		cout<<"YES"<<endl;
    return 0;
}