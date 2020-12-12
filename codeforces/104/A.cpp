#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        int n; cin >> n;
        int ans;
        if((n>=0 and n<=10) or (n>=22 and n<=25)) ans = 0;
        if(n==11)ans = 4;
        if(n>=12 and n <=19) ans = 4;
        if(n==20) ans = 15;
        if(n==21) ans = 4;

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