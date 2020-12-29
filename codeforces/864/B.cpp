#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool up(char c){
    return c>='A' and c<='Z';
}
void task(){
    int n; cin >> n;
    string s; cin >> s;
    // set ?
    set<char>S;
    int ans = 0;
    for(int i = 0; i<n; i++){
        if(up(s[i])){
            ans = max(ans, (int)S.size()); S.clear();
        }
        else S.insert(s[i]);
    }
    ans = max(ans, (int)S.size());
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