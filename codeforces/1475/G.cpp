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
    std::vector<int>aFreq(maxn, 0);
    for(int i = 0; i<n; i++){
        int a; cin >> a;
        aFreq[ a ]++;
    }

    for(int i = maxn; i>=1; i--){
        int res = 0;
        for(int j = 2; i*j<=maxn; j++){
            res = max(aFreq[i*j], res);
        }
        aFreq[i] += res;   
    }

    int ans = n - *max_element(all(aFreq));
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