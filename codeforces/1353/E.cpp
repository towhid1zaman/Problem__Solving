
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
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

int main(){
        _
        int T; cin >> T;
        while(T--){
            int n,k; cin >> n >> k;
            string s; cin >> s;
            s = "#"+s;
            int ans = n+5;
            int tot = 0;
            for(int i = 1; i<=n;i++){
                tot+=(s[i]=='1');
            }
            for(int i = 1; i<=k; i++){
                int fix = 0;
                for(int j = i;j<=n; j+=k){
                    if(s[j]=='1')fix++;
                    else fix--;
                    fix = max(0,fix);
                    ans = min(ans, tot - fix);
                }
            }
            cout<<ans<<endl;
        }



return 0;
}
