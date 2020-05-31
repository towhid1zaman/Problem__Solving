
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
        int T; cin >> T;
        while(T--){
            string s;cin>>s;
            int n = sz(s);
            int pa[n+1],pb[n+1];
            pa[0] = pb[0] = 0;
            rep(i,n){
                pa[i+1] = pa[i];
                pb[i+1] = pb[i];
                if(s[i] == '0')pa[i+1]++;
                else pb[i+1]++;
            }
            int ans = min(pa[n], pb[n]);
            int U,V;
           rep1(i,1,n){
                U = pa[i]+pb[n]-pb[i];
                V = pb[i]+pa[n]-pa[i];
                ans= min(ans, min(U, V));
            }
           cout<<ans<<endl;
        }

return 0;
}


