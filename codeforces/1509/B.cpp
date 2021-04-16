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

void task(){
    int n; cin >> n;
    string s; cin >> s;
    bool ans = 1;
    ll M = 0, t = 0, tot = 2;
    for(char c:s){
        if(c=='T')t++;
        else M++;
    }
    if(M*2 != t){
        cout << "NO" << endl;
        return;
    }
    while(tot--){
        int mm = 0, tt = 0;
        rep(i, n){
            if(s[i]=='M')mm++;
            else tt++;
            if(mm > tt){
                ans = 0;
                break;
            }
        }
        if(tot)reverse(all(s));
    }
    cout << (ans? "YES":"NO") << endl;
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