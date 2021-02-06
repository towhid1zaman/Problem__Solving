#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 10000005;
const int mod = 1000000007;

void task(){
    std::vector<ll>sq(maxn,0);
    for(ll i = 1; i<=4000; i++){
        for(ll j = i*i; j<=maxn; j+=(i*i)){
            sq[j] = i*i;
        }
    }
    ll a, n; cin >> a >> n;
    ll tot = 0;
    for(int i = a; i<a+n; i++){
        tot+=(i/sq[i]);
    }
    cout << tot<<endl;
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