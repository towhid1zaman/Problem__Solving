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
    int n; cin >> n;
    std::vector<int>a(n), b(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];

    int ab_0 = 0;
    std::map<pair<int,int>, int> cnt;
    for(int i = 0 ; i<n; i++){
        if(a[i]==0){
            if(b[i]==0)ab_0++;
            continue;
        }
        int g = gcd(a[i], b[i]);
        a[i]/=g, b[i]/=g;
        cnt[{a[i], b[i]}]++;
    }
    int ans = 0;
    for(auto x: cnt){
        ans = max(ans,x.second);
    }
    cout << ans + ab_0 << endl;
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