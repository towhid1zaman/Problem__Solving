

// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
#pragma comment (linker,"/STACK:16777216")
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
#define sz(x) ((int)(x).size())
#define ff first
#define ss second
#define pb push_back
#define eb emplace_back
#define deb(x) cout<<#x <<"="<<x<<endl;
#define present(v,x) ((v).find(x)!=(v).end())
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
#define yn(k) if(k)puts("YES");else puts("NO");

vi mods = {1000000007, 1000000009, 998244353};
const double pi = acos(-1.0);
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
const int mod = mods[0];

/*
 *
 */
void printt(ll x1, ll y1, ll x2, ll y2, ll x3, ll y3){
	cout << x1 << " " << y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
 
}
void task(){
		ll n, m, cnt = 0;
		cin >> n >> m;
		string str[n];
		for (ll i = 0; i < n; i++){
			cin >> str[i];
			for (ll j = 0; j < m; j++){
				if (str[i][j] == '0')
					cnt++;
			}
		}
		cout << (3 * n * m) - (3 * cnt) << endl;
		for (ll i = 0; i < n; i++){
			for (ll j = 0; j < m; j++){
				if (str[i][j] == '0')
					continue;
				if (i == 0 && j == 0){
					printt(i + 1, j + 1, i + 2, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 1, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 2, j + 1, i + 1, j + 1);
				}
				else if (i == n - 1 && j == 0){
					printt(i + 1, j + 1, i, j + 2, i + 1, j + 2);
					printt(i, j + 1, i + 1, j + 1, i + 1, j + 2);
					printt(i, j + 1, i, j + 2, i + 1, j + 1);
				}
				else if (i == 0 && j == m - 1){
					printt(i + 1, j + 1, i + 2, j, i + 2, j + 1);
					printt(i + 1, j, i + 1, j + 1, i + 2, j + 1);
					printt(i + 1, j, i + 2, j, i + 1, j + 1);
				}
				else if (i == n - 1 && j == m - 1){
					printt(i + 1, j + 1, i, j + 1, i + 1, j);
					printt(i, j, i + 1, j + 1, i + 1, j);
					printt(i, j, i, j + 1, i + 1, j + 1);
				}
				else if (i == 0){
					printt(i + 1, j + 1, i + 2, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 1, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 2, j + 1, i + 1, j + 1);
				}
				else if (j == 0){
					printt(i + 1, j + 1, i + 2, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 1, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 2, j + 1, i + 1, j + 1);
				}
				else if (j == m - 1){
					printt(i + 1, j + 1, i + 2, j, i + 2, j + 1);
					printt(i + 1, j, i + 1, j + 1, i + 2, j + 1);
					printt(i + 1, j, i + 2, j, i + 1, j + 1);
				}
				else if (i == n - 1){
					printt(i + 1, j + 1, i, j + 1, i + 1, j);
					printt(i, j, i + 1, j + 1, i + 1, j);
					printt(i, j, i, j + 1, i + 1, j + 1);
				}
				else{
					printt(i + 1, j + 1, i + 2, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 1, j + 1, i + 2, j + 2);
					printt(i + 1, j + 2, i + 2, j + 1, i + 1, j + 1);
				}

			}
		}
}

int main(){
        _
#ifdef OJ
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
#endif

        int T = 1; cin >> T;
        for(int __ = 1; __ <= T; __++){
            //cout <<"Case "<<__<<": ";
            task();
        }


/*array size ?
 *n==1 ?
 *different approach ?
*/        
return 0;
}