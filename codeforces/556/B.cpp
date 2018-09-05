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
	ll n;
	cin>>n;

	//set<ll> s;
	vector<ll> v,v2;
	ll x;
	f0(n)
	{
	    cin>>x;
	    //s.insert(x);
	    v.push_back(x);
	    v2.push_back(i);
	}
	//cout<<s.size()<<endl;
    ll t =n+1;
	while(t--)
    {
        f0(v.size())
        {
            if(i%2==0)
            {
                if(v[i]==0)
                {
                    v[i] = n  - 1;
                }
                else
                    v[i]--;
            }
            else {
				if (v[i] == n-1)
					v[i] = 0;
				else
					v[i]++;
			}
        }
        if(v==v2)
        {
            cout<< "Yes"<<endl;
                    return 0;
        }
    }
        cout<< "No"<<endl;



    return 0;
}
