
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

/*we have to reach n-1 from 0
 *first convert destination to its binary form
 *let, 10101 is binary form, this tell us Direction RLRLR
 */
ll Pow(ll x,ll n){
    ll res = 1;
    while(n>0){
        if(n%2==1){
            res = res*x;
        }
        x = x*x;
        n = n/2;
    }
    return res;
}
void task(){
	ll h, n; cin >> h >> n;
	ll destination = n-1;
	int binary[50]{};
	for(int i = 0; i<h; i++){
		binary[h-i-1] = destination%2;
		destination/=2;
	}

	ll node_visited = 0;

	if(binary[0]==1){
		//means right child
		node_visited+=Pow(2,h);
	}
	else node_visited++; 

	for(int i = 1; i<h; i++){
		if(binary[i]==binary[i-1]){
			node_visited+=Pow(2,h-i);
		}
		else node_visited+=1;
	}

	cout << node_visited << endl;

}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1,tc = 1; //cin >> T;
        while(T--){
            //cout <<"Case "<<tc++<<": ";
            task();
        }
        
        
return 0;
}


