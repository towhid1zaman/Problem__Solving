
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
const int maxn = 200100;

ll LIS[maxn];
int main(){
        _
        int T; cin >> T;
        while(T--){
            ll n; cin >>n;
            vll a(n+2);
            rep1(i,1,n)LIS[i]=0;
            rep1(i,1,n) cin >> a[i];
            LIS[1] =1;
            rep1(i,1,n){
                if(!LIS[i])LIS[i] = 1;
                for(int j = 2; i*j<=n;j++){
                    if(a[i*j]>a[i])LIS[i*j]  = max(LIS[i*j],LIS[i]+1);
                }
            }
            ll ans  = 0;
            rep1(i,1,n){
                ans = max(ans,LIS[i]);
            }
            cout<<ans<<endl;
        }
return 0;
}

