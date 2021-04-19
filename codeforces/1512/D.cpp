/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n; cin >> n;

    std::vector<int>b(n+2);

    rep(i, n+2){
        cin >> b[i];
    }
    sort(all(b));

    ll sum = 0;

    rep(i, n)sum+=b[i];
    if(sum == b[n]){
        rep(i, n)cout << b[i]<<' ';
        cout << endl;
        return;
    }

    sum+=b[n];

    rep(i, n+1){
        if(sum - b[i] == b[n+1]){
            rep(j, n+1){
                if(i!=j)cout <<b[j]<<' ';
            }
            cout << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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