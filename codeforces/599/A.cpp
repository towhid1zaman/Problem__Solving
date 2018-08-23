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

int toInt(string s){int sm;stringstream ss(s);ss>>sm;return sm;}
int toLlint(string s){long long int sm;stringstream ss(s);ss>>sm;return sm;}
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll d1,d2,d3;
    cin>>d1>>d2>>d3;
    ll s[4];
    s[0] = d2+d3+d3+d2;
    s[1] = d1+d3+d3+d1;
    s[2] = d1+d1+d2+d2;
    s[3] = d1 + d2 + d3;
   // cout<<s[0]<<" "<<s[1]<<" "<<s[2]<< " "<<s[3]<<endl;

    sort(s,s+4);
    cout<<s[0]<<endl;

    return 0;
}
