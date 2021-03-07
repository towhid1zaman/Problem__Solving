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

ll g=1;
ll lp[10000005];
void sieve(){
    fill(lp, lp+10000005, 0);
    for(ll i=2;i<=10000000;i++){
        if(lp[i]==0)
        for(ll j=i*i;j<=10000000;j+=i){
            if(lp[j]==0)
            lp[j]=i;
        }
        if(lp[i]==0)lp[i]=i;
    }
}

std::map<pair<ll, ll>, ll> frq,tot;
void update(ll i, ll a, ll n){
    while(a != 1){
        frq[{i,lp[a]}]++;
        ll cnt = frq[{i, lp[a]}];
        tot[{lp[a], cnt}]++;
        if(tot[{lp[a], cnt}] == n){
            g*=lp[a];
            g%=mod;
        }
        a/=lp[a];
    }
}

void task(){
    ll n, q; cin >> n >> q;
    for(ll i = 0; i<n; i++){
        ll a; cin >> a;
        update(i,a, n);
    }
    while(q--){
        ll i, a; cin >> i >> a; i--;
        update(i, a, n);
        cout << g << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    sieve();
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}