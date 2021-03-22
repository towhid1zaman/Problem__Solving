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

void task(){
    int n, k1, k2; cin >> n >> k1 >> k2;
    int w, b; cin >> w >> b;
    int w_cnt  = min(k1,k2) + abs(k1-k2)/2;
    k1=n-k1, k2 = n-k2;
    int b_cnt = min(k1,k2) + abs(k1-k2)/2;
    cout <<((w <= w_cnt and b<=b_cnt) ?"YES":"NO" )<<endl;
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