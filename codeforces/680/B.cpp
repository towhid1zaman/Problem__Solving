#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;



void task(){
    int n, a; cin >> n >> a;
    std::vector<int>t(n);
    for(int i = 0; i<n; i++){
        cin >> t[i];
    }
    int ans = t[--a];
    for(int i = 1; a-i>=0 or a+i<=n; i++){
        int l = a-i < 0 or t[a-i] == 1;
        int r = a+i >=n or t[a+i] == 1;
        if(l and r){
            if(a-i>=0)ans++;
            if(a+i<n)ans++;
        }
    }
    cout << ans <<endl;
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