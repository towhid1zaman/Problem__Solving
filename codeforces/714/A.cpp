#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll l1,r1,l2,r2,k; cin >> l1 >> r1 >> l2 >> r2 >> k;
    ll ans = 0;
    ll l = max(l1,l2), r = min(r1,r2);
    if(l<=r){
        if(k>=l and k<=r) ans = r-l;
        else ans = (r-l)+1;
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