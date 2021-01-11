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
    string a,b,c;
    std::map<string, int> mp;
    mp["polycarp"] = 1;

    int ans = 0;
    for(int i = 0; i<n; i++){
        cin >> a >> b >> c;
        for(int i = 0; i<a.size(); i++){
            if(a[i]>='A' and a[i]<='Z')a[i]+=32;
        }
        for(int i = 0;i<c.size(); i++){
            if(c[i]>='A' and c[i]<='Z')c[i]+=32;
        }
        mp[a] = mp[c] + 1;
        ans = max(ans, mp[a]);
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