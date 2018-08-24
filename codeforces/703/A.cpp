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
    ll t;
    cin>>t;
//    if(t==2)
//    {
//        cout<< "Friendship is magic!^^"<<endl; return 0;
//    }
//    ll n1,n2;
//    cin>>n1>>n2;
    ll m,c;
    ll cm=0,cc=0;
        f0(t)
        {
            cin>>m>>c;
            if(m>c)
            {
                cm++;
            }
            if(c>m)
            {
                cc++;
            }
        }
       // cout<<cm<<cc<<endl;
        if(cm==cc)
        {
            cout<<"Friendship is magic!^^"<<endl;
            return 0;
        }
        ll cmm = 0,ccc=0;
        if(cm>cc)
        {
            cmm=cm+1;
        }
        if(cc>cm)
        {
            ccc=cc-1;
        }
        if(cmm>ccc)
        {
            cout<< "Mishka"<<endl;
        }
        else
            cout<<"Chris"<<endl;


    /*
    cin>>c1>>c2;
    ll sum = 0;
       for(ll i =n1;i<=n2;i++)
       {
            sum+=i;
       }
       //cout<<sum<<endl;
       ll m = m1+m2;
       ll c = c1+c2;
       if(m<c)
       {
           cout<< "Mishka"<<endl;
       }
       if(c<m)
       {
           cout<<"Chris"<<endl;
       }
        cout<<endl;

*/
    return 0;
}
