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
    std::vector<ll> a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    sort(all(a));
    ll ans = 1000000000000000000ll;

    for(int c = 1; c<=100000; c++){
        ll cnt = 0;
        bool over = false;
        for(int i = 0; i<n; i++){
            ll need = pow(c, i);
            if(need < 0){// overflow
                over = true;
                break;
            }
            cnt+=abs(a[i] - need);
        }
        if(over)break;
        ans = min(ans, cnt);
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