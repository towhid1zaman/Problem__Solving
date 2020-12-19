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
    std::vector<int> v(n+1);
    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }
    int cnt = 0;
    for(int i = 2; i<=n; i++){
        int add = max(0, k-v[i]-v[i-1]);
        cnt += add;
        v[i] += add;
    }
    cout << cnt << endl;
    for(int i = 1; i<=n; i++){
        cout << v[i]<<' ';
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