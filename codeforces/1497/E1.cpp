/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

ll lp[10000005];
void sieve(){
    fill(lp, lp+10000005, 0);
    for(ll i=2;i<=10000000;i++){
        if(lp[i]==0)
        for(ll j=i*i;j<=10000000;j+=i){
            if(lp[j]==0)
            lp[j]=i;
        }
        if(lp[i]==0)lp[i]=i;
    }
}

void task(){
    int n, k; cin >>  n >> k;
    set< std::vector<int> > s;

    ll ans = 1;

    rep(i, n){
        ll a; cin >> a;
        std::vector<int>cur;
        while(a > 1){
            ll p = lp[a];
            int cnt = 0;
            while(a % p == 0)a/=p, cnt++;
            cnt%=2;
            if(cnt)cur.push_back(p);
        }

        if(s.count(cur)){
            s.clear();
            ans++;
        }

        s.emplace(cur);
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
    sieve();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}