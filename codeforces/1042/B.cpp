
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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

/*
 *
 */

void task(){
	int n; cin >> n;
	vi A,B,C,AB,BC,AC,ABC;

	rep(i, n){
		int c; string s;
		cin >> c >> s;
		sort(all(s));
		if(s=="A")A.pb(c);
		else if(s=="B")B.pb(c);
		else if(s=="C")C.pb(c);
		else if(s=="AB")AB.pb(c);
		else if(s=="BC")BC.pb(c);
		else if(s=="AC")AC.pb(c);
		else if(s=="ABC")ABC.pb(c);
	}
	sort(all(A)), sort(all(B)), sort(all(C));
	sort(all(AB)), sort(all(BC)), sort(all(AC)), sort(all(ABC));

	vi Vitamins;
	//A,B,C
	if(A.size() and B.size() and C.size())Vitamins.pb(A[0]+B[0]+C[0]);
	//AB,C
	if(AB.size() and C.size())Vitamins.pb(AB[0]+C[0]);
	//BC,A
	if(BC.size() and A.size())Vitamins.pb(BC[0]+A[0]);
	//AC,B
	if(AC.size() and B.size())Vitamins.pb(AC[0]+B[0]);
	//ABC
	if(ABC.size())Vitamins.pb(ABC[0]);
	//AB,BC
	if(AB.size() and BC.size())Vitamins.pb(AB[0]+BC[0]);
	//AB,AC
	if(AB.size() and AC.size())Vitamins.pb(AB[0]+AC[0]);
	//AC,BC
	if(AC.size() and BC.size())Vitamins.pb(AC[0]+BC[0]);

	sort(all(Vitamins));
	if(Vitamins.size())cout << Vitamins[0] << endl;
	else cout << -1 << endl;
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
        
return 0;
}


