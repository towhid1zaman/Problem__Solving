#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll bit(ll n){
    ll ccnt = 1;
    while(n){
        ccnt*=2;
        n/=2;
    }
    return ccnt;
}
void task(){
    ll n, k; cin >> n >> k;
    ll ans = 0;
    ll x = bit(n);
    ans = x - 1;
    cout <<(k==1 ? n:ans) << endl;
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