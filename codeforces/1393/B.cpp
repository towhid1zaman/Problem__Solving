
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
const int maxn = 200005;

vi freq(maxn,0);
set<pii>freq_set;

void update(int x, int change){
	freq_set.erase({freq[x],x});
	freq[x]+=change;
	freq_set.emplace(freq[x],x);
}
void insert(int x){
	update(x,+1);
}
void erase(int x){
	update(x,-1);
}

bool query(){
	auto it = freq_set.rbegin();
	int first = it->first; it++;
	int second = it->first; it++;
	int third = it->first; it++;
	if(first>=8)return true;
	if(first>=6 and second>=2)return true;
	if(first>=4 and second>=4)return true;
	if(first>=4 and second>=2 and third>=2)return true;
	return false;
}
 
void task(){
	rep(i,maxn)freq_set.emplace(freq[i],i);
 	int n; cin >> n;
 	for(int i = 0; i<n; i++){
 		int a; cin >> a;
 		insert(a);
 	}
 	int q; cin >> q;
 	while(q--){
 		char op; cin >> op;
 		int x; cin >> x;
 		if(op=='+')insert(x);
 		else erase(x);
 		if(query())cout <<"YES"<<endl;
 		else cout <<"NO"<<endl;
 	}
 	 
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1;// cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


