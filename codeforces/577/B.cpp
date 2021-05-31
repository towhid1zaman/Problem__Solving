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
const int maxn = 200005;
const int mod = 1000000007;

int n, m;
std::vector<vector<int>>dp(1003, vector<int>(1003, -1));
std::vector<int> v;

int go(int idx, int rem){
    if(idx == n) return 0;
    if(rem > 0 and rem%m == 0) return 1;
    int &ans = dp[idx][rem];
    if(ans != -1)return dp[idx][rem];
    ans = 0;

    if((rem+v[idx]) % m == 0) ans = 1;
    if( go(idx+1, rem) > 0) ans = 1;
    if( go(idx+1, (rem+v[idx]) % m) > 0) ans = 1;

    return ans;

}
void task(){
    cin >> n >> m;
    v.resize(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        v[i]%=m;
    }
    if(n >= m){
        cout << "YES" << endl;
        return;
    }
    
    if(go(0, 0)){
        cout << "YES"<< endl;
    }
    else cout <<"NO"<< endl;
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