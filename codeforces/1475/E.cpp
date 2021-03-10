/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

struct Combinatorics{
    ll fact[maxn],inv[maxn];
 
    ll BigMod(ll b,ll p,ll m){
        ll ret = 1;
        while(p > 0){
            if(p&1)ret = (ret * b) % m;
            p = p >> 1;
            b = (b * b) % m;
        }
        return ret;
    }
 
    void Build(ll n){
        fact[0] = 1;
        for(int i = 1;i <= n+2;i++){
            fact[i] = (fact[i - 1] * i) % mod;
        }
        for(int i = 0;i <= n+2;i++){
            inv[i] = BigMod(fact[i],mod-2,mod);
        }
    }
 
    ll Choose(ll n,ll r){
        if(n < r)return 0;
        ll u = fact[n];
        ll v = (inv[r] * inv[n - r]) % mod;
        return (u * v) % mod;
    }

    ll Factorial(ll n){
        return fact[n];
    }

}combi;
ll Choose(ll n , ll k){
    if(k == 0)
        return 1;
    ll res = n;
    for(int i = 1 ; i < k ; ++i)
        res *= (n-i);
    for(int i = 1 ; i <= k ; ++i)
        res = res / i;
    return res;
}
void task(){
    int n, k; cin >> n >> k;
    
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    ll N = 0, R = 0;
    combi.Build(n);
    sort(all(a));
    reverse(all(a));
    
    for(int i = 0; i<n; i++){
        if(a[i] == a[k-1]){
            N++;
            if(i < k) R++;
        }
    }
    cout << combi.Choose(N, R) << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}