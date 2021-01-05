#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    std::vector<ll>Al(n),Ar(n);
    for(int i = 0; i<n; i++){
        cin >> Al[i] >> Ar[i];
    }
    int m; cin >> m;
    std::vector<ll>Bl(m),Br(m);
    for(int i = 0; i<m; i++){
        cin >> Bl[i] >> Br[i];
    }

    sort(all(Al)), sort(all(Ar));
    sort(all(Bl)), sort(all(Br));
    ll ans = max({0ll,Al.back() - Br[0], Bl.back() - Ar[0]});

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