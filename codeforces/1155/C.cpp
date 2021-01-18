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
    
    std::vector<ll>x(n);
    for(int i = 0; i<n; i++){
        cin >> x[i];
    }
    
    std::vector<ll>p(m);
    for(int i = 0; i<m; i++){
        cin >> p[i];
    }

    ll g = 0;
    for(int i = 1; i<n; i++){
        g = gcd(g, x[i] - x[i-1]);
    }

    ll N = 0, ind = 0;
    for(int i = 1; i<=m; i++){
        if(g%p[i-1] == 0){
            cout <<"YES" <<endl<<x[0] <<' '<<i<<endl;
            return;
        }
    }

    cout <<"NO"<<endl;
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