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
vll v;

void task(){
    v.push_back(1ll);
    v.push_back(11ll);
    v.push_back(111ll);
    v.push_back(1111ll);
    v.push_back(11111ll);
    v.push_back(111111ll);
    v.push_back(1111111ll);
    v.push_back(11111111ll);
    v.push_back(111111111ll);
    v.push_back(111111111ll);
    ll n; cin >> n;
    ll x = v.size();
    bool ok = ((n/11)/10) >= (n%11);

    cout << (ok? "YES":"NO") << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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