/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef int ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()
const int maxn =10000001;
const int mod = 1000000007;

ll Dsum[maxn], f[maxn];
void d(){
    for(ll i = 1; i<=maxn; i++){
        for(ll j = i; j<=maxn; j+=i){
            Dsum[j]+=i;
        }
    }

    for(ll i = 1; i<=maxn; i++){
        if(Dsum[i] <= maxn and !f[Dsum[i]]){
            f[ Dsum[i] ] = i;
        }
    }

}
void task(){
    ll c; cin >> c;
    cout << (f[c] ? f[c] : -1 ) << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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