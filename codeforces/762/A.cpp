#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll n, k; cin >> n >> k;
    if(k>26880){
        cout << -1 << endl;
        return;
    }
    std::vector<ll> v;
    for(ll i = 1; i*i<=n; i++){
        if(n%i==0){
            v.push_back(i);
        }
        if(n%i==0 and i!=n/i){
            v.push_back(n/i);
        }
    }
    sort(all(v));
    cout << (v.size()>=k ? v[k-1]:-1) << endl;
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