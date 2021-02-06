#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1e6+1;
const int mod = 1000000007;


std::vector<ll> D;
void d(ll n){
    for(ll i = 2; i*i<=n; i++){
        if(n%i==0){
            D.push_back(i);
            if(n/i != i){
                D.push_back(n/i);
            }
        }
    }
}

void task(){
    int n; cin >> n;
    std::vector<ll> a(n);
    std::map<ll, bool> vis;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        vis[ a[i] ] = 1;
    }
    sort(all(a));
    ll mx = a.back()*a[0];
    d(mx);
    ll ans = -1;
    int cnt =  0;
    for(int DD:D){
        if(vis[DD])cnt++;
    }
    if(cnt>=vis.size()){
        ans = mx;
    }
    cout << ans << endl;
    D.clear();
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    //d();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}