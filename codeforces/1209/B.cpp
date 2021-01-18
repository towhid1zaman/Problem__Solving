#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    string s; cin >> s;
    std::vector<int>on(n,0), a(n), b(n);
    for(int i = 0; i<n; i++){
        cin >> a[i] >> b[i];
    }
    for(int i = 0; i<n; i++)on[i] = (s[i] -'0');

    int ans = 0;
    for(int time = 0; time<100000; time++){
        int cur = 0;
        for(int i = 0; i<n; i++){
            if(time>=b[i] and time%a[i] == b[i]%a[i])on[i]^=1;
            cur+=on[i];
        }
        ans = max(ans, cur);
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