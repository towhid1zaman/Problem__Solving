
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
 
void task(){
 	int n; cin >> n;
 	string s; cin >> s;
 	vi zero,one;
 	vi ans(n);
 	int num = 0;
 	for(int i = 0; i<n; i++){
 		//chek for 0, means starting of subsequence 0
 		if(s[i]=='0'){
 			if(zero.size()){
 				auto index = zero.back();
 				zero.pop_back();
 				ans[i] = index;
 				one.push_back(index);
 			}
 			else{
 				num++;
 				ans[i] = num;
 				one.push_back(num);
 			}
 		}
 		// for 1
 		if(s[i]=='1'){
 			if(one.size()){
 				auto index = one.back();
 				one.pop_back();
 				ans[i] = index;
 				zero.push_back(index);
 			}
 			else{
 				num++;
 				ans[i] = num;
 				zero.push_back(num);
 			}
 		}
 	}
 	cout << num << endl;
 	for(int i = 0; i<n; i++){
 		cout << ans[i] << ' ';
 	}
 	cout << endl;
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


