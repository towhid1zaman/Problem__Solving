#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}
template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

ll sod(ll x){
    ll s = 0;
    while(x){
        s+=(x%10);
        x/=10;
    }
    return s;
}

ll sumofdigit(ll x){
    // while(x>9)
        x = sod(x);
    return x;
}
ll Pow(ll x,ll n){
    ll res = 1;
    while(n>0){
        if(n%2==1){
            res = res*x;
        }
        x = x*x;
        n = n/2;
    }
    return res;
}

ll equX(ll a, ll b, ll c, ll x){
    return ((b) * Pow(x, a)) + c;
}

void task(){
    ll a, b, c; cin >> a >> b >> c;
    std::vector<ll>d;
    for(ll sox = 1; sox<=81; sox++){
        ll X = equX(a,b,c,sox);
        d.push_back(X);
    }
    sort(all(d));
    std::vector<ll>ans;
    for(ll x: d){
        ll now = x;
        ll sd = sumofdigit(x);
        if(now == equX(a,b,c,sd) and (now>0 and now<1e9)){
            ans.push_back(now);
        }
    }
    sort(all(ans));
    if(ans.empty()){
        cout << 0 << endl;
        return;
    }
    cout << ans.size() << endl;
    for(ll x: ans){
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