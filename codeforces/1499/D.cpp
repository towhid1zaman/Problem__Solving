/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 20000100;
const int mod = 1000000007;

ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}

ll D[maxn];
void d(){
    for(ll i = 2; i<maxn; i++){
        if(D[i])continue;
        for(ll j = i; j<maxn; j+=i){
            D[j]++;
        }
    }
}
std::vector<ll> fact;
void f(ll x){
    for(ll i = 1; i*i<=x; i++){
        if(x%i)continue;
        fact.push_back(i);
        if(i != (x/i))fact.push_back(x/i);
    }
}
void task(){
    ll c,d,x; cin >> c >> d >> x;
    fact.clear();
    f(x);
    ll ans = 0;
    for(ll p : fact){
        ll mult_of_x = x/p;
        ll ab = mult_of_x + d;
        if(ab % c == 0){
            ab/=c;
            ans += (1 << D[ab]);
        }
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
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}