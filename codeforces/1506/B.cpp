/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
#define endl "\n"
#define pb push_back
#define rep(i,a) for(int i=0;i<a;i++)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n, k; cin >> n >> k;
    string s; cin >> s;
    int cnt = count(all(s), '*');
    if(cnt == 1 or cnt == 2){
        cout << cnt << endl;
        return;
    }
    int f = 0, l = 0;
    f = s.find('*'), l = s.rfind('*');
    int ans = 0, cur = f;
    for(int i = f; i<l; i++){
        if(s[i]=='*')cur = i;
        if(k==i-f)f = cur, ans++;
    }
    cout << ans + 2 << endl;
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