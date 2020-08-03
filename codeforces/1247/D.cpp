
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(ll i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
//smallest prime factor of a number
int lpf[1000005];
void sieve(){
    for(ll i=2;i<=1000000;i++){
        if(lpf[i]==0){
      		lpf[i]=i;
        for(ll j=i*2;j<=1000000;j+=i){
            if(lpf[j]==0)lpf[j]=i;
        }
    }
  }
}
vector< pair<ll,ll> >get_factorization(ll n, ll k){
	vector< pair<ll,ll> >factors;
	ll prev = -1,cur = lpf[n], ind = -1;
	while(n!=1){
		if(prev!=cur){
			if(ind!=-1){
				if(factors[ind].second % k == 0){
					factors.pop_back();
					ind--;
				}
				else{
					factors[ind].second%=k;
				}
			}
			factors.push_back(make_pair(cur,1));
			ind++;
		}
		else
			factors[ind].second++;
		prev = cur;
		n /= cur;
		cur = lpf[n];
	}
	if(ind!=-1){
		if(factors[ind].second%k== 0){
			factors.pop_back();
			ind--;
		}
		else{
			factors[ind].second%=k;
		}
	}
	return factors;
}
void task(){

 	int n,k; cin >> n >> k;
 	vll a(n);
 	rep(i,n) cin >> a[i];

 	std::map<vector< pair<ll,ll> >, ll> L_store;

 	ll ans = 0;
 	rep(i,n){
 		vector< pair<ll,ll> > List = get_factorization(a[i],k);
 		vector< pair<ll,ll> > L(List);
 		for(auto &it:L){
 			it.second = k - it.second;
 		}
 		ans+=L_store[L];
 		L_store[List]++;
 	}

 	cout << ans << endl;

}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif
        sieve();
        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


