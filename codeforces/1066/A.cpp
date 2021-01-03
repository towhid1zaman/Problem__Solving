#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll L, v, l, r;
    cin >> L >> v >> l >> r;
    //position that are divisible by v and not in the range [l,r] and less than L
    ll OneToleft = l-1, rightToL = r+1, ans = 0;
    if(1%v==0) ans+= (OneToleft/v) - (1/v) + 1; else ans+= (OneToleft/v) - (1/v);
    if(L<rightToL){
        cout << ans << endl;
        return;
    }

    if(rightToL%v==0) ans+= (L/v) - (rightToL/v) + 1; else ans+=(L/v) - (rightToL/v);

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