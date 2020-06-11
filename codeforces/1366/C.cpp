
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
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 2000100;



int main(){
        _
        int T; cin >> T;
        while(T--){
            int n,m; cin >> n >> m;
            int a[n+1][m+1];
            vi z(m+n,0),o(m+n,0);
            rep(i,n)rep(j,m){
                cin >> a[i][j];
                if(!a[i][j])z[i+j]++;
                else o[i+j]++;
            }
            int pos = m+n-2;
            int tot = (pos)/2;
            ll ans = 0;
            int x,y; x=y=0;
            rep(i,tot+1){
                if(i==tot and (n+m)%2==0)continue;
                x = z[i]+z[pos-i];
                y = o[i]+o[pos-i];
                ans+=min(x,y);
            }
            cout<<ans<<endl;
        }

return 0;
}



