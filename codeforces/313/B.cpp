#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define  f0(n) for(size_t i=0;i<n;i++)
#define  f1(n) for(size_t i=1;i<=n;i++)
#define  mem(a) memset(a,0,sizeof(a))
#define  memn(a) memset(a,-1,sizeof(a))
#define  pb push_back
#define  srt(v) sort(v.begin(),v.end())
#define  nl '\n'
//int arr[1000000];
int in() {int n;scanf("%d", &n);return n;}
ll Lin() {ll n;scanf("%lld", &n);return n;}
double Din() {double n;scanf("%lf", &n);return n;}
//long long lcm = (x*y)/(__gcd(x,y));
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
	NFS
    string s;
    cin>>s;
    ll len = s.length();
    //cout<<len<<endl;
                vector<ll> v(len);
                    for(int i = len-1; i>=1;i--)
                    {
                        if(s[i-1] == s[i])
                        {
                            v[i-1] = v[i] +1;
                        }
                        else
                            v[i-1] = v[i];
                    }

    ll n;
    cin>>n;
        ll a,b;
            for(int i =0; i<n; i++)
            {
                cin>>a>>b;
                cout<<v[a-1] - v[b-1]<<nl;
            }

    return 0;
}
