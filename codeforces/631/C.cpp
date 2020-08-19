
// </> : towhid1zaman

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
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

/*
	two types of operation,
	1-> accending order
	2-> descending order
	
*/


void task(){
 	int n, m,last, t, r; cin >> n >> m;
 	vi a(n);
 	multiset<int>s;
 	rep(i,n) cin  >> a[i];

 	deque<pii>q;

 	rep(i,m){
 		cin >> t >> r;
 		while(!q.empty() and q.back().first<r){
 			q.pop_back();
 		}
 		q.push_back(make_pair(r,t));
 	}
 	int v = q.front().first;
 	for(int i = 0; i<v; i++){
 		s.insert(a[i]);
 	}

 	m = q.size();
 	vi ans(v);

 	for(int i = 0; i<m; i++){
 		pii qe = q.front();
 		q.pop_front();
 		r = qe.first;
 		t = qe.second;

 		if(i==m-1)last = 0;
 		else last = q.front().first;

 		if(t==1){
 			for(int j = r-1; j >= last; j--){
 				ans[j] = *s.rbegin();
 				s.erase(--s.end());
 			}
 		}
 		else{
 			for(int j = r-1; j >= last; j--){
 				ans[j] = *s.begin();
 				s.erase(s.begin());
 			}
 		}
 	}

 	int rest = ans.size();
 	while(rest<n){
 		ans.push_back(a[rest++]);
 	}

 	for(int i = 0; i<n; i++){
 		cout << ans[i] <<' ';
 	}
 	cout << endl;

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


