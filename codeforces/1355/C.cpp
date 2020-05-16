
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(ll i=(a);i<=(b);++i)
#define irep(i,b,a) for(ll i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;



int main(){
        _
        int T=1; //cin >> T;
        while(T--){
            ll a,b,c,d; cin >> a  >> b >> c >> d;
            ll ans = 0;
            irep(i,b,a){
                ll mn  = max(b,c-i+1);
                if(mn>c){
                    continue;
                }
                ll top = i+c-1;
                ll  mx = min(top,d);
                ll mxx = min(i+mn-c,d-c+1);
                ll x = mx - c+1-mxx+1;
                //cout<<x<<endl;
                ans+=(mxx+mx-c+1)*x/2+max(0ll,c-mn+1-x)*(d-c+1);
            }
            cout<<ans<<endl;
        }

return 0;
}



