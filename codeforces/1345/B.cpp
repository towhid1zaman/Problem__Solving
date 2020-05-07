
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 100010;

int main(){
        _ios;

        int T; cin >> T;
        vll res;
        for(ll i = 1; i<maxn; i++){
            ll x=(3*i*(i-1))/2 +2*i ;
            res.pb(x);
        }

        while(T--){
            ll n; cin >> n;
            ll ans = 0;
            while(n>0){
                auto it = upper_bound(all(res),n);
                if(it==res.begin())break;

                it--;
                ans++;
                n-=*it;
            }
            cout<<ans<<endl;
        }


return 0;
}

