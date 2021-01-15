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
    std::vector<int>cur(n+10, 0), pre_mx(n+10, 0), pre_mn(n+10, 0), suf_mx(n+10, 0), suf_mn(n+10, 0);
    string a; cin >> a;
    a="#"+a;

    for(int i = 1; i<=n; i++){
        if(a[i]=='+') cur[i] = cur[i-1] + 1;
        else cur[i] = cur[i-1] - 1;

        pre_mx[i] = max(pre_mx[i-1], cur[i]);
        pre_mn[i] = min(pre_mn[i-1], cur[i]);
    }

    cur[n+1] = cur[n], pre_mx[n+1] = pre_mx[n], pre_mn[n+1] = pre_mn[n]; 
    int x = 0;
    for(int i = n; i>=1; i--){
        if(a[i]=='+')x++;
        else x--;
        suf_mx[i] = max(suf_mx[i+1], x);
        suf_mn[i] = min(suf_mn[i+1], x);
    }

    suf_mx[0] = suf_mx[1], suf_mn[0] = suf_mn[1];

    while(m--){
        int l, r; cin >> l >> r;
        int mx = (cur[n] - cur[r]) - suf_mn[r+1] + cur[l-1];
        int mn = (cur[n] - cur[r]) - suf_mx[r+1] + cur[l-1];
        int L = min(pre_mn[l-1], mn);
        int R = max(pre_mx[l-1], mx);
        cout << R - L + 1 << endl;
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}