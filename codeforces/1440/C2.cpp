

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
int n, m;
bool v[200][200];
string s;
vector<int> sol;
void pb(int a, int b) {
    v[a][b]=1-v[a][b];
    sol.push_back(a), sol.push_back(b);
}
void add(int a, int b, int c) {
    if (c!=1) pb(a, b);
    if (c!=2) pb(a, b+1);
    if (c!=3) pb(a+1, b);
    if (c!=4) pb(a+1, b+1);
}
void task(){
	cin >> n >> m;
        sol.clear();
        for (int i=1; i<=n; i++) {
            cin >> s;
            for (int j=0; j<m; j++) {
                v[i][j+1]=(s[j]=='1');
            }
        }
        if (n%2) {
            for (int j=1; j<m; j++) {
                if (v[n][j]) add(n-1, j, 4);
            }
            if (v[n][m]) {
                add(n-1, m-1, 3);
            }
        }
        if (m%2) {
            if (v[n][m]) {
                add(n-1, m-1, 3);
            }
            if (v[n-1][m]) {
                if (n==2) {
                    add(n-1, m-1, 4);
                } else {
                    add(n-2, m-1, 3);
                }
            }
            for (int i=m-2; i>=1; i--) {
                if (v[i][m]) {
                    add(i, m-1, 4);
                }
            }
        }
        for (int i=1; i<n; i+=2) {
            for (int j=1; j<m; j+=2) {
                int db=v[i][j]+v[i][j+1]+v[i+1][j]+v[i+1][j+1];
                int a=v[i][j], b=v[i][j+1], c=v[i+1][j], d=v[i+1][j+1];
                if ((db-a)%2) add(i, j, 1);
                if ((db-b)%2) add(i, j, 2);
                if ((db-c)%2) add(i, j, 3);
                if ((db-d)%2) add(i, j, 4);
            }
        }
        int sze=sol.size();
        cout << sze/6 << "\n";
        for (int i=0; i<sze; i+=6) {
            for (int j=0; j<6; j++) {
                cout << sol[i+j] << " ";
            }
            cout << endl;
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