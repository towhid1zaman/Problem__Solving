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
    std::vector<int>p(n+1, 0);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        p[i+1] = p[i] + v[i];
    }
    int ans = 0;
    for(int d: p){
        if(d == 0) continue;
        int cur = 0;
        for(int i = 0; i<=n; i++){
            if(cur == p[i]){
                cur+=d;
            }
        }

        if(cur == p[n] + d){
            ans = n - p[n] / d;
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