#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, m; cin >> n >> m;
    std::vector<int> v;
    ll tot = 0;
    for(int i = 0; i<n; i++){
        int a, b; cin >> a >> b;
        tot+=a;
        if(a>b)v.push_back(a-b);
    }
    int ans = 0;
    sort(all(v)), reverse(all(v));
    for(int i = 0; i<v.size(); i++){
        if(tot<=m)break;
        ans++;
        tot-=v[i];
    }
    if(tot<=m)cout << ans << endl;
    else cout << -1 << endl;
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