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
    int n, m; cin >> n >> m;
    std::vector<ll>a(n);
    for(int i = 0; i<n;i++){
        cin >> a[i];
    }
    ll g = 0;
    for(int i = 1; i<n; i++){
        g = gcd(g, abs(a[i] - a[0]));
    }
    for(int i = 0; i<m; i++){
       ll b; cin >> b;
        ll as = gcd(a[0] + b,g);
        cout << as <<' ';
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