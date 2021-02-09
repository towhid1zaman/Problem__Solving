/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 2147483647;
const int mod = 1000000007;

ll n, m;
bool inex(ll x){
    return ( (x/2 + x/3 - x/6) >= (n+m) and n<=x/2 and m<=x/3 );
}
void task(){
    cin >> n >> m;
    ll low = 1, high = maxn;
    while(low<=high){
        ll mid = (low+high)>>1;
        if(inex(mid))high = mid-1;
        else low = mid+1;
    }
    cout << low << endl;
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