
// </> : towhid1zaman

//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
//#pragma GCC target("avx,avx2,fma") 
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
const int maxn = 1000051;

/*
 *
 */
ll a,b,k;
ll chek[maxn];
bool checkprime[maxn + 5];
vll prime;
void sieve() {///true means prime
	fill(checkprime,1);
    prime.push_back(2);
    checkprime[0]=0;
    checkprime[1]=0;
    for(ll i = 4; i<=maxn; i+=2)checkprime[i] = 0;
    for (ll i = 3; i <= maxn; i += 2) {
        if (checkprime[i]) {
            prime.push_back(i);
            for (ll j = i * i; j <= maxn; j += (i + i))
                checkprime[j] = 0;
        }
    }
    chek[0]=0;
    for(int i = 1; i<=maxn; i++){
    	chek[i] = chek[i-1] + checkprime[i-1];
    }

}

bool can(ll mid){
	for(ll i = a; i <= b - mid + 1; i++){
		if(chek[i + mid] - chek[i] < k)return false;
	}
	return true;
}

void task(){
	
	cin >> a >> b >> k;

	ll l = 1, r = b - a + 1, res = -1;

	while(l<=r){
		ll mid = (l+r) >> 1;
		if(can(mid)){
			r = mid - 1;
			res = mid;
		}
		else{
			l = mid + 1;
		}
	}
	cout << res << endl;
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        sieve();

        int T = 1,tc = 1; //cin >> T;
        while(T--){
            //cout <<"Case "<<tc++<<": ";
            task();
        }
        
        
return 0;
}


