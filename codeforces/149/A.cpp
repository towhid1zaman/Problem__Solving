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
	int k;
	cin>>k;
	int month[12];
	for(int i = 0; i<12; i++)
	{
		cin>>month[i];
	}
	sort(month, month+12);
	int sum= 0;
	for(int i = 0; i<12;i++)
	{
		sum+=month[i];
	}
	//cout<<sum<<endl;
	//cout<<month[12-1]<<endl;
		 int cnt=0,d=0,ans=0;
        for(int i=11; i>=0; i--)
        {
            cnt++;
            d+=month[i];
            if(k<d || k==d)
            {
                ans=1;
                break;
            }

        }
        if(k==0)
        {
        	cout<<"0"<<endl;
        	return 0;
		}
        if(ans==1)
            cout<<cnt<<endl;
        else
            cout<<"-1"<<endl;
    
    return 0;
}