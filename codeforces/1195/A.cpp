#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, k; cin >> n >> k;
    std::vector<int>a(k+1,0);
    for(int i = 0; i<n; i++){
        int x; cin >> x;
        a[x]++;
    }
    int ans = 0;
    for(int i = 1; i<=k; i++){
        if(a[i]%2)ans++;
    }
    if(n%2)n++,ans++;
    cout << n-(ans/2) << endl;
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