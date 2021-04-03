/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()
const int maxn = 200005;
const int mod = 1000000007;
bool pali(string s) {
    string t = s;
    reverse(all(t));
    return s == t;
}
void yes(string s){
    cout << "YES" << endl;
    cout << s << endl;
}
void task(){
    string s, ans; cin >> s;
    bool ok = 1;
    ans = 'a'+s;
    string an = s+'a';
    rep(i, s.size()){
        ok&=(s[i]=='a');
    }
    if(ok){
        cout << "NO"<<endl;return;
    }
    if(!pali(ans)){
        yes(ans);
        return;
    }
    if(!pali(an)){
        yes(an);
        return;
    }
    cout << "NO" << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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