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

std::vector<ll>D;
void d(ll l, ll r, ll n){
    for(ll i = 1;i*i <= n;i++){
        if(n%i==0){
            if(i>=l and i<=r)D.push_back(i);
            if(n/i != i){
                if(n/i >=l and n/i <=r)D.push_back(n/i);
            }
        }
    }
}
void task(){
    ll l, r, x, y; cin >> l >> r >> x >> y;
    d(l, r, y);
    sort(all(D));
    int ans = 0;
    for(int i = 0; i<D.size(); i++){
        for(int j = 0; j<D.size(); j++){
            if((gcd(D[i], D[j]) == x and lcm(D[j], D[i])==y))ans++;
        }
    }
    cout << ans << endl;
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