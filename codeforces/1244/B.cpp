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
    string s, t; cin >> s;
    int pl = 0,pr = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1'){
            pl = i+1;
            break;
        }
    }
    reverse(all(s));
    for(int i = 0; i<n; i++){
        if(s[i] == '1'){
            pr = i+1;
            break;
        }
    }

    int ans = (n - (min(pl,pr) - 1) ) * 2;
    if(pr == 0 and pl ==0)ans = n;
    cout << ans << endl;
    
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