#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    string n; int k;
    cin >> n >> k;
    reverse(all(n));
    int ans = n.size()-1, zero = 0, other = 0;
    for(int i = 0; i<n.size()-1; i++){
        if(n[i] == '0' )zero++;
        else other++;
        if(zero==k){
            ans = min(ans, other);
            break;
        }
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