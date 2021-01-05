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
    std::map<char, int> st;
    string s; cin >> s;
    int ans = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i]>='a' and s[i]<='z')st[ s[i] ]++;
        if(s[i]>='A' and s[i]<='Z'){
            if(st[ s[i]+32 ] > 0 )st[ s[i]+32 ]--;
            else ans++;
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