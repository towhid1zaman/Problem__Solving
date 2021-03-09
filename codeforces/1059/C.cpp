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

ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}


void task(){
    ll n; cin >> n;
    ll rest = n;
    for(ll i = 1;i<=n; i*=2){
        if(rest == 3){
            cout <<i<<' '<<i <<' '<<i*3 << endl;
            return; 
        }
        for(ll g = 1; g<=(rest+1)/2; g++){
            cout <<i <<' ';
        }
        rest/=2;
    }
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