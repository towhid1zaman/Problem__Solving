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
    ll n, k; cin >> n >> k;
    while(k > 3){
        k--, n--; cout << 1 << ' ';
    }
    if(n%4 == 2)cout << 2 <<' '<<n/2 - 1 <<' '<<n/2-1<<endl;
    else if(n%2)cout << 1 <<' '<<n/2<<' '<<n/2<<endl;
    else cout << n/2<<' '<<n/4<<' '<<n/4<<endl;
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