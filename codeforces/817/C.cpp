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

ll sod(ll n){
    ll sumd = 0;
    while(n){
        sumd+=n%10;
        n/=10;
    }
    return sumd;
}

void task(){
    ll n, s; cin >> n >> s;

    ll left = 1, right = n;
    ll l = 0;
    while(left <= right){
        ll mid = (left + right) >> 1;
        if(mid - sod(mid) >= s){
            right = mid-1;
            l = mid;
        }
        else left = mid + 1;
    }

    cout << (l ? n -  l + 1 : 0) << endl;
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