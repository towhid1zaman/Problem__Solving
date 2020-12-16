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
    std::vector<int>v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    ll tot = accumulate(all(v), 0ll);
    int ans = 0;
    for(int li = 1; li<=n; li++){
        int sum = 0;
        for(int i = 0; i<li; i++){
            sum+=v[i];
        }
        bool ok = true;
        int cur = 0;
        for(int i = li; i<n; i++){
            cur+=v[i];
            if(cur > sum){
                ok = false;
                break;
            }
            else if(sum == cur){
                cur = 0;
            }
        }
        if(cur != 0) ok = false;
        if(ok){
            ans = n - tot/sum;
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