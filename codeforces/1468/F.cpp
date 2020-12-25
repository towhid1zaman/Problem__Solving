#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}
void task(){
    ll n; cin >> n;
    std::map<pair<ll,ll>, ll> mp;
    ll ans = 0;
    for(int i = 0; i<n; i++){
        ll a,b,c,d; cin >> a >> b >> c >> d;
        ll A = c-a, B = d - b;
        ll cf = gcd(abs(A), abs(B));
        A/=cf, B/=cf;
        ans+=mp[{A,B}];
        A*=-1, B*=-1;
        mp[{A,B}]++;
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

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}