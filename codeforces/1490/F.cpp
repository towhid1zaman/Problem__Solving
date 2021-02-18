/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
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
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    std::map<int, int> cnt;
    std::map<int, int> ans;
    for(int i = 0; i<n; i++){
        cnt[ a[i] ]++;
        int res = cnt[ a[i] ];
        ans[ res ]+= res;
    }
    int mx = 0;

    for(auto x: ans) mx = max(mx, x.second);

    cout << n - mx << endl;

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