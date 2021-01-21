#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll tot(ll n, ll D){
    ll jump = n/D;
    ll sum_D = (D*(D-1))/2;
    ll sum = D + (jump*sum_D);
    return sum;
}

void task(){
    ll n; cin >> n;
    std::vector<ll> d;
    for(ll i = 1; i*i<=n; i++){
        if(n%i==0){
            d.push_back(i);
            if(n/i != i)d.push_back(n/i);
        }
    }

    sort(all(d));

    int d_sz = d.size();
    set<ll>ans;
    for(int i = 0; i<d_sz; i++){
        ll sum = tot(n, d[i]);
        ans.emplace(sum);
    }

    for(auto x: ans){
        cout << x <<' ';
    }
    cout << endl;
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