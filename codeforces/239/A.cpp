#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll y, k, n; cin >> y >> k >> n;
    std::vector<ll>X;
    for(int i = k; i<=n; i+=k){
        ll x = i - y;
        if(y<i)X.push_back(x); 
    }
    if(X.empty())cout << -1 << endl;
    else{
        for(auto x:X)cout << x <<' ';cout << endl;
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