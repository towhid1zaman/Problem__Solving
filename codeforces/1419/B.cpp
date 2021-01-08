#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll tot(ll n){
    return n*(n+1)/2;
}
void task(){
    ll n;
    cin >> n;

    // nice stair case 1 3 7 15 31 63... (2^n) - 1
    // total stairs n*(n+1)/2
    // count nice stairs by brute

    std::vector<ll>nice;

    for(ll i = 1; i<63; i++){
        //2^n - 1
        nice.push_back((1ll<<i)-1);
    }

    ll ans = 0;
    for(auto N: nice){
        if(tot(N)<=n){
            ans++;
            n-=tot(N);
        }
        else{
            break;
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

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}