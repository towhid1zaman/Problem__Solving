#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 100007;
const int mod = 1000000007;

ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}

std::vector<int>Div[maxn];
void d(){
    for(int i = 2; i<maxn; i++){
        for(int j = i; j<maxn; j+=i){
            Div[j].push_back(i);
        }
    }
}

std::vector<int>dp(maxn, 0);
int ans = 0;

void go(int x){
    int now = 0;
    for(auto k: Div[x]){
        now = max(now, dp[k]);
    }
    dp[x] = now+1;
    for(auto k: Div[x]){
        dp[k] = now+1;
    }
    ans = max(ans, now+1);
}

void task(){
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        int x; cin >> x;
        go(x);
    }

    cout << ans << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    d();
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}