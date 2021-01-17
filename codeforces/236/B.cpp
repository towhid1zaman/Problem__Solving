#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1000000;
const int mod = 1073741824;

std::vector<int>divisor(maxn, 0);
void d(){
    for(int i = 1; i<=maxn; i++){
        for(int j = i; j<=maxn; j+=i){
            divisor[j]++;
        }
    }
}
void task(){
    int a, b, c; cin >> a >> b >> c;
    ll ans = 0;
    for(int i = 1; i<=a; i++){
        for(int j = 1;j<=b; j++){
            for(int k = 1; k<=c; k++){
                ans+=divisor[i*j*k]%mod;
                ans%=mod;
            }
        }
    }
    cout << ans%mod << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    d();
    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}