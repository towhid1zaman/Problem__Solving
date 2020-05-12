
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
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
const int maxn = 2000100;
ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}
ll b[maxn],c[maxn];
int main(){
        _
        ll n; cin >> n;
        vll a(n+2);
        rep1(i,1,n) cin >> a[i];
        b[1] = a[1];
        c[n] = a[n];
        rep1(i,2,n){
            b[i] = gcd(a[i],b[i-1]);
        }
        irep(i,n-1,1){
            c[i] = gcd(a[i], c[i+1]);
        }
        ll ans = lcm(c[2],b[n-1]);
        rep1(i,2,n-1){
            ans = lcm(ans,gcd(b[i-1],c[i+1]));
        }
        cout<<ans<<endl;

return 0;
}

