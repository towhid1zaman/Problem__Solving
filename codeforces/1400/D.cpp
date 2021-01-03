
// </> : towhid1zaman

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
#pragma GCC optimize("Ofast")  
#pragma GCC target("avx,avx2,fma") 
#include "bits/stdc++.h"
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<pii> vpii;
typedef vector<pll> vpll;

#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define _ ios::sync_with_stdio(0);cin.tie(0);
#define sp(k) cout<<setprecision(k)<<fixed;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()

#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)

#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;


void task(){
    int n; cin >> n;
    std::vector<int> a(n);
    for(int i = 0; i<n; i++){
    	cin >> a[i];
    }
    vector<vector<int>>prefix(n+1, vector<int>(n+1));
    vector<vector<int>>suffix(n+1, vector<int>(n+1));

    for(int i = 0; i<n; i++){
    	for(int j = 0; j<=n; j++){
    		prefix[i+1][j] = prefix[i][j];
    	}
    	prefix[i+1][a[i]]++;
    }

    for(int i = n; i>0;i--){
    	for(int j = 0; j<=n; j++){
    		suffix[i-1][j] = suffix[i][j];
    	}
    	suffix[i-1][a[i-1]]++;
    }

    ll ans = 0;

    for(int i = 0; i<n; i++){
    	for(int j = i+1; j<n; j++){
    		ans += prefix[i][a[j]] * suffix[j+1][a[i]];
    	}
    }

    cout << ans << endl;
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


