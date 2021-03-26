/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
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
    string s; cin >> s;
    int n = (int)s.size();

    std::vector<vi>v(26);
    rep(i, n){
        v[s[i]-'a'].push_back(i);
    }
    int tot = 0;
    rep(i, 26) tot+=!v[i].empty();

    string ans="";
    int cur = 0;
    rep(i, tot){
        for(char c = 'z'; c>='a'; c--){
            if(v[c-'a'].size() > 0){
                int indx = *lower_bound(all(v[c-'a']), cur);
                bool ok = true;
                for(char c2 = 'a'; c2 <='z'; c2++){
                    if(v[c2-'a'].size() > 0 and v[c2-'a'].back() < indx){
                        ok = false;
                        break;
                    }
                }

                if(ok){
                    ans+=c;
                    v[c-'a'].clear();
                    cur = indx;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
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