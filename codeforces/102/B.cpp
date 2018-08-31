#include<bits/stdc++.h>
using namespace std;

#define Towhid ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
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
ll out(ll n)
{
    ll cnt=0;
    while(n)
    {
        cnt++;
        n/=10;
    }
    return cnt;
}
int main()
{
  	Towhid;
	ll n,m,k,i,j,p1,p2,cnt=1,sum=0,flag=0;;
    string s;
    cin>>s;
    n=s.length();
    for (i=0;i<n;i++)
        sum+=(s[i]-'0');
    if (n==1)
    {
        cout<<0;
        return 0;
    }
    while(out(sum)>1)
    {
        k=sum;
        sum=0;
        cnt++;
        while(k)
        {
            sum+=(k%10);
            k/=10;
        }
    }
    cout<<cnt;
    
    return 0;
}

