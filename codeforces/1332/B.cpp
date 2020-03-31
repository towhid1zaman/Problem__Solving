
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2005;

int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            ll chek[]={2,3,5,7,11,13,17,19,23,29,31};
            ll n; cin >> n;
            ll res[maxn];
            set<ll>s;
            ll p = 1;
            ll f[21]={};
            rep(i,n){
                ll a; cin >> a;
                rep(j,11){
                    if(a%chek[j]==0){
                        if(f[j]==0){
                            f[j]=p++;
                        }
                        res[i]=f[j];
                        s.insert(j+1);
                        break;
                    }
                }
            }
            ll sol = sz(s);
            cout<<sol<<endl;
            rep(i,n){
                cout<<res[i]<<" ";
            }
            cout<<endl;
        }


return 0;
}







