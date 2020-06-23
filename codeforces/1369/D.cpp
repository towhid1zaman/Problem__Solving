
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
#define rep(i,a) for(int i=0;i<a;i++)
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
const int maxn = 6000001;
const int N = 2000002;
ll res[maxn];
ll chek[maxn];
void Pre(){
    res[1] = 0,res[2] = 0,res[3] = 4;
    chek[1] = 0,chek[2] = 0,chek[3] = 1;
    for(ll i=4;i<=N;i++){
    	res[i] = (res[i-1]%mod + res[i-2]%mod)%mod;
    	res[i] = (res[i]%mod + res[i-2]%mod)%mod;
    	if(chek[i-1]==0 && chek[i-2]==0){
    		chek[i] = 1,res[i] = (res[i]+4)%mod;
    	}
    	else chek[i] = 0;
    }
}

int main(){
        _
        Pre();
        int T; cin >> T;
        while(T--){
             ll n; cin >> n; cout << res[n] <<endl;
        }


return 0;
}



