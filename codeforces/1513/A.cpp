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
    int n, k;cin >> n >> k;
    ll ans = 1;
    vi a(n+1, 0);
    rep1(i,1,n)a[i]=i;
    if(k>=(n+1)/2){
        cout << -1 << endl;return;
    }
    cout << ans<< ' ';
    rep1(i,2,n){
        if(k){
            swap(a[i], a[i+1]); cout << a[i]<<' '<<a[i+1]<<' ';
            i++;k--;
        }
        else cout << a[i]<<' ';
    }
    cout << endl;
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