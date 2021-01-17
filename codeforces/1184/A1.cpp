#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll possible(ll x, ll y, ll r){
    return (x*x) + (2*x*y) + x + 1 == r;
}
void task(){
    ll r; cin >> r;
    if(r%2==0 or r<5){
        cout <<"NO"<<endl;
        return;
    }
    cout << 1<<' '<< r/2 - 1<<endl;
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