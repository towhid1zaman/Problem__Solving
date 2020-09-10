
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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;

/*
 *
 */

void task(){
	string a, b, c; cin >> a >> b >> c;
	std::map<int,int>A, B, C;

	for(char c: a)A[c-'a']++;
	for(char c: b)B[c-'a']++;
	for(char c: c)C[c-'a']++;


	int best = -1;
	int k1,k2;

	for(int k = 0; k < sz(a); k++){
		bool f = 1;
		int mn = inf;

		for(int i = 0; i<26;i++){
			if(B[i]*k > A[i]){
				f = 0;
			}
		}

		if(!f) break;

		for(int i = 0; i< 26 ; i++){
			if(C[i]) mn = min(mn, (A[i] - B[i]*k)/C[i]);
		}

		if(best < mn + k) best = mn + k, k1 = k, k2 = mn;
	}
	string ans;
	for(int i = 0; i<k1; i++){
		ans+=b;
	}

	for(int i = 0; i<k2; i++){
		ans+=c;
	}

	for(int i = 0; i<26; i++){
		A[i] -= B[i]*k1 + C[i]*k2; //rest

		for(int j = 0; j<A[i]; j++){
			ans+=char(i+'a');
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

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
        
return 0;
}


