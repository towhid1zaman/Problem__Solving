#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
const double pi= acos(-1);

template <class T> inline T bigmod(T p,T e,T M){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p) % M;p = (p * p) % M;}return (T)ret;}
template <class T> inline T gcd(T a,T b){if(b==0)return a;return gcd(b,a%b);}
template <class T> inline T modinverse(T a,T M){return bigmod(a,M-2,M);}   // M is prime}
template <class T> inline T bpow(T p,T e){ll ret = 1;for(; e > 0; e >>= 1){if(e & 1) ret = (ret * p);p = (p * p);}return (T)ret;}
template <class T> inline T bpowMod(T p, T e){return p%e;}

int toInt(string s){int sm;stringstream ss(s);ss>>sm;return sm;}
int toLlint(string s){long long int sm;stringstream ss(s);ss>>sm;return sm;}
/*
ll bigMod(ll a, ll b, ll m)
{
    if(b==0) return 1%m;
    if(b%2==0)
    {
        ll value = bigmod(a,b/2,m);
        return (value*value)%m;
    }
    else if(b%2==1)
    {
        ll x, y;
        x = a%m;
        y = bigmod(a,b-1,m);
        return (x*y) % m;
    }
}
*/
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
        string s;
        cin>>s;
        ll len = s.length();
        ll result = 0;
        f0(len)
        {
            result = (result*10 + s[i] - '0')%4;
        }
        if(result == 0)
        {
            cout<<"4"<<endl;
        }
        else
            cout<< "0"<<endl;

        return 0;
}
