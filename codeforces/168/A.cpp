#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        ll n, x, y; cin >> n >> x >> y;
        ll ans = 0;
        ans = ceil((n*y)/100.0) - x;
        cout << max(ans,0ll) << endl;
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