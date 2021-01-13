#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll n; cin >> n;
    std::set<ll> v;
    for(ll i = 0; i<=sqrt(n); i++){
        v.emplace(i);
    }
    for(ll i = 1;i<=sqrt(n); i++){
        v.emplace(n/i);
    }
    cout <<v.size() << endl;
    for(auto c:v)cout << c <<' ';cout << endl;
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