#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool vl(char c){
    return ( c== 'A' or c=='E' or c=='I' or c=='O' or c=='U' or c=='Y');
}
void task(){
    string s; cin >> s;
    int ans = 1, cur = 1;
    for(int i = 0; i<s.size();i++){
        if(vl(s[i])){
            ans = max(cur, ans);
            cur = 0;
        }
        cur++;
    }
    cout << max(ans, cur) << endl;
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