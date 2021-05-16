/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 5005;
const int mod = 1000000007;

std::vector<int>one, zero;
vector<vector<int>>dp(maxn, vector<int>(maxn, -1));

int go(int i, int j){
	if(i==-1)return 0;
	if(j==-1)return mod;
	auto &ans = dp[i][j];
	if(ans != -1)return ans;
	ans = mod;
	ans = min(ans, go(i, j-1));
	ans = min(ans,abs(one[i] - zero[j]) + go(i-1, j-1));
	return ans;
}

void task(){
    int n; cin >> n;
    rep(i, n){
    	int a; cin >> a;
    	if(a)one.push_back(i);
    	else zero.push_back(i);
    }

    int ans = go(one.size()-1, zero.size()-1);
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}