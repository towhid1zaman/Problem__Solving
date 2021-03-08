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
std::vector< pair<ll, ll> > v;
bool comp(pair<ll,ll>a, pair<ll, ll>b){
    return a.first >= b.first and a.second <= b.second;
}
void task(){
    ll n; cin >> n;
    std::vector<ll>A, B;
    for(ll i = 0; i<n; i++){
        ll a, b; cin >> a >> b;
        v.emplace_back(a,b);
        A.push_back((a-b));
        B.push_back(i+1);
    }
    sort(all(A));
    reverse(all(A));
    ll ans = 0;
    for(int i = 0; i<n; i++){
        ans+=((A[i]*B[i]) + ((v[i].second*n) - (v[i].first)));
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}