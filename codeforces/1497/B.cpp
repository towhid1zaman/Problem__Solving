/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n; cin >> n;
    int m; cin >> m;
    std::vector<int> a(n);
    rep(i, n) cin >> a[i], a[i]%=m;

    int ans = 0;

    std::map<int, int> cnt;
    rep(i, n) cnt[ a[i] ]++;
    rep(i, m){
        if(i*2 > m)break;
        if(i == 0){
            if(cnt[i])ans++;
            continue;
        }
        if(cnt[i] or cnt[m-i])ans++;
        
        ans += max(abs(cnt[ i] - cnt[ m - i]) - 1, 0);
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