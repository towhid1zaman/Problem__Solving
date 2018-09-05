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
    int  n,a,b;
    cin>>n>>a>>b;
        ll c[n];
            f0(n)
            {
                cin>>c[i];
            }
            ll sum = 0;
            if(n%2==1 and c[n/2]==2)
            {
                sum+=min(a,b);
            }
            //cout<<sum<<endl;
            for(int i=0,j=n-1; i<j; i++,j--)
            {
                if((c[i]==1 and c[j]==0) or (c[i]==0 and c[j]==1))
                    {
                        cout<<"-1"<<endl;
                        return 0;
                    }
                    if(c[i]==2 and c[j]==2)
                        {
                            sum+=min(a,b);
                            sum+=min(a,b);
                        }
                else
                    {
                        if(c[i]==1 and c[j]==2)
                        {
                            sum+=b;
                        }
                        else if(c[i]==0 and c[j]==2)
                        {
                            sum+=a;
                        }
                        else if(c[i]==2 and c[j]==1)
                        {
                            sum+=b;
                        }
                        else if(c[i]==2 and c[j]==0)
                        {
                            sum+=a;

                        }
                    }
            }
    cout<<sum<<endl;

    return 0;
}
