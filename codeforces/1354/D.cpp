
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
const int maxn = 9000;

struct FenwickTree{
	int N;
	vector<int> tree;
	void build(int n){
		N = n;
		tree.assign(n + 1, 0);
	}

	void update(int idx, int val){
		while (idx <= N)
		{
			tree[idx] += val;
			idx += idx & -idx;
		}
	}

	void updateMax(int idx, int val){
		while (idx <= N)
		{
			tree[idx] = max(tree[idx], val);
			idx += idx & -idx;
		}
	}
        //mainly Query
	int pref(int idx){
		int ans = 0;
		while (idx > 0){
			ans += tree[idx];
			idx -= idx & -idx;
		}
		return ans;
	}
        //range sum
	int rsum(int l, int r){
		return pref(r) - pref(l - 1);
	}

	int prefMax(int idx){
		int ans = -2e9;
		while (idx > 0){
			ans = max(ans, tree[idx]);
			idx -= idx & -idx;
		}
		return ans;
	}
};

int main(){
        _
        int n, q; cin >> n >> q;
        FenwickTree BIT;
        BIT.build(n);

        for(int i = 0; i<n; i++){
        	int x; cin >> x;
        	BIT.update(x,1);
        }

        while(q--){
        	int k; cin >> k;
        	if(k>=1){
        		BIT.update(k,1);
        	}
        	else{
        		k = -k;
        		int ans;
        		int beg = 1, last = n;
        		//binarySearch
        		while(beg<=last){
        			int mid = (beg+last)/2;
        			int cur_pref = BIT.pref(mid);
        			if(cur_pref>=k){
        				ans = mid;
        				last = mid-1;
        			}
        			else beg = mid+1;
        		}
        		//decreasing the frequency
        		BIT.update(ans, -1);
        	}
        }

        int ans = 0;
        for(int i = 1; i<=n; i++){
        	if(BIT.pref(i)){
        		ans = i;
        		break;
        	}
        }
        cout << ans << endl;

return 0;
}
