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
ll isPrime(ll n)
{
    if(n == 2) return 1;
   if(n < 2 || n % 2 == 0) return 0;
   for(ll i = 3; i*i <= n; i += 2) {
       if(n % i == 0) return 0;
   }
        return 1;
}

int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	ll a;
		cin>>a;
		cin.ignore();
		ll num[a];
			for(int i = 0; i<a; i++)
			{
				cin>>num[i];
				//sq_rt = sqrt(a);
				//if(sq_rt*sq_rt == a)
				//{
					//cout<< "YES"<<endl;
				//}
				//cout<<sq_rt<<endl;
			}
			ll sq_rt;
			for(ll i = 0; i<a; i++)
			{
				//if(num[i] == 1)
				//{
				//	cout<< "NO"<<endl;
				//}
		
				//else
				//{
				sq_rt = sqrt(num[i]);
				//cout<<sq_rt<<endl;
					if(isPrime(sq_rt) == 1 and ((sq_rt*sq_rt)==num[i]) )
						{
							cout<< "YES"<<endl;
						}
						else
							cout<< "NO"<<endl;
			//	}	
				
			}

	
    
    return 0;
}