#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll spf(ll n){
    for(ll i = 2; i*i<=n; i++){
        if(n%i==0) return i;
    }
    return n;
}
void task(){
    ll n; cin >> n;
    ll SPF = spf(n);
    if(n%2==0){
        cout << n/2 << endl;
        return;
    }
    n-=SPF;
    cout << 1 + n/2 << endl;
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