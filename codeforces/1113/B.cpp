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

    std::vector<int> a(n);
    int mx = 0, mn = mod, mx_id = 0, mn_id = 0;
    
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i]%2==0 and a[i] > mx) mx = a[i], mx_id = i;
        if(a[i]<mn) mn = a[i], mn_id = i;
    }
    ll tot = accumulate(all(a), 0ll);
    ll ans = tot+tot;
    for(int i = 0; i<n; i++){
        for(int d = 1; d<=a[i]; d++){
            if(a[i]%d)continue;
            ll now = tot - a[i] - mn;
            now+=(mn*d) + (a[i]/d);
            ans = min(ans, now);
        }
    }
    cout << min(ans, tot) << endl;
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