
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
bool isprime(ll n){
    if(n==2)return true;
    if(n<2 or n%2==0)return false;
    for(ll p = 3; p*p<=n;p+=2){
        if(n%p==0){
            return false;
        }
    }
    return true;
}
void task(){
	 int  n; cin >> n;
	 string s = to_string(n);
	 std::map<char, bool> map;
	 for(char ch:s)map[ch]=1;
	 int ans = 0;
	 	for(int i = 1;i<=sqrt(n); i++){
	 		if(n%i==0){
	 			string t = to_string(i);
	 			for(int k = 0; k<t.size(); k++){
	 				if(map[t[k]]){
	 					ans++;
	 					break;
	 				}
	 			}		
		 }
		 if(i != (n/i) && n % (n/i) == 0){
                	string t = to_string(n/i);
		 			for(int k = 0; k<t.size(); k++){
		 				if(map[t[k]]){
		 					ans++;
		 					break;
		 				}
		 			}
	 	}
	}
	 cout << ans<< endl;
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


