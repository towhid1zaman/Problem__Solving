
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            int n,x; cin >> n >> x;
            vi a(n);
            ll tot = 0;
            rep(i,n){
                cin >> a[i];
                tot+=a[i];
            }
            ll avg = tot/n;
            if(avg>=x){
                cout<<n<<endl;
                continue;
            }
            sort(all(a));
            reverse(all(a));
            ll sum = 0,ans = 0;
            rep(i,n){
                sum+=a[i];
                ll posAvg = sum/(i+1);
                if(posAvg>=x){
                    ans++;
                }
                else break;
            }
            cout<<ans<<endl;
        }


return 0;
}

