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
    ll n;
    ll x;
    string s;
    cin>>n;
    ll S = 0;
    ll N = 0;
    ll sout = 0;
    ll nout = 0;
    f0(n)
    {
            cin>>x;
            cin>>s;
            if((S==0 and s!="South") or (S==20000 and s!="North") or S<0 or S>20000)
            {
                cout<<"NO";
                return 0;
            }
            if(s=="North")
                S-=x;
            if(s=="South")
                S+=x;
        }
        //cout<<S<<endl;
        if(S==0)
        {
            cout<<"YES"<<endl;

        }
        else
        cout<<"NO"<<endl;

    return 0;
}
