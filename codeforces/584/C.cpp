
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
 *n.b: char should be dif from their own position
 *
 */

void task(){
	int n, t; cin >> n >> t;
	string s1, s2; cin >> s1 >> s2;
	
	string s3;
	s3.resize(n);
	int same1 = n-t, same2 = n-t, dif1 = t, dif2 = t;

	for(int i = 0; i<n and same1 and same2; i++){
		if(s1[i] == s2[i]){
			s3[i] = s1[i];
			same1--, same2--;
		}
	}

	for(int i = 0; i<n; i++){
		if(!s3[i]){

			if(same1){
				s3[i] = s1[i];
				same1--;
				dif1--;
			}
			else if(same2){
				s3[i] = s2[i];
				same2--;
				dif2--;
			}
			else{
				char c = 'a';
				while( !(c != s1[i] and c != s2[i]) )c++;
				s3[i] = c;
				dif1--;
				dif2--;
			}

		}
	}

	bool ans = !same1 and !same2 and !dif1 and !dif2;
	if(ans){
		cout << s3 << endl;
	}
	else{
		cout << -1 << endl;
	}

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


