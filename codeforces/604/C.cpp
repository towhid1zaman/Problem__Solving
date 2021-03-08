/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
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
    int cnt = 1, tot = 0;
    for(int i = 1; i<n; i++){
        if(s[i]!=s[i-1])cnt++;
    }

    for(int i = 1; i<n; i++){
        if(s[i]==s[i-1])tot++;
    }
    if(tot == 1)cnt++;
    if(tot >= 2)cnt+=2;
    cout << cnt << endl;
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