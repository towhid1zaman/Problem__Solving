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
//	string s;
//	cin>>s;
	ll num;
	cin>>num;
	/*ll len = s.length();
        if(s=="9" or s=="8" or s=="7" or s=="6")
        {
            cout<<"10"<<endl;
            return 0;
        }
        if(len<=1)
        {
            cout<<"0"<<endl;
        }
        else
        {
            if(s[len-2]=='0' or s[len-2]=='1' or s[len-2]=='2' or s[len-2]=='3' or s[len-2]=='4')
            {
                 f0(len-1)
                    {
                        cout<<s[i];
                    }
                    cout<<"0"<<endl;
            }
            else
            {
                f0(len-2)
                {
                    cout<<s[i];
                }
                if(s[len-2]=='5')
                {
                    cout<<"60"<<endl;
                }
                 if(s[len-2]=='6')
                {
                    cout<<"70"<<endl;
                }
                if(s[len-2]=='7')
                {
                    cout<<"80"<<endl;
                }
                if(s[len-2]=='8')
                {
                    cout<<"90"<<endl;
                }
                if(s[len-2]=='9')
                {
                    cout<<"90"<<endl;
                }
            }

        } */
        if(num<=5)
        {
            cout<<num/10<<endl;
        }
        else
            cout<<(num+5)/10*10<<endl;



    return 0;
}
