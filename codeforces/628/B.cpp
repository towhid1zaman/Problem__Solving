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

const double pi = acos(-1.0);
const int maxn = 2000006;
const int mod = 1000000007;

namespace String_Basic{
    // Convert int to string
    template <typename T>
    string to_str(T str){
        stringstream stream;
        stream << str;
        return stream.str();
    }

    // Convert string to int
    template <typename T>
    int to_int(T num){
        int val;
        stringstream stream;
        stream << num;
        stream >> val;
        return val;
    }

    // To Lower
    string ToLower(string s){
        for (int i = 0; i < s.size(); ++i) {
            s[i] = tolower(s[i]);
        }
        return s;
    }

    // To Upper
    string ToUpper(string s){
        for (int i = 0; i < s.size(); ++i) {
            s[i] = toupper(s[i]);
        }
        return s;
    }
}using namespace String_Basic;

void task(){
    string s; cin >> s;
    ll ans = 0;
    for(int i = (int)s.size() - 1; i>=1;i--){
        string cur;
        cur.clear();
        cur.push_back(s[i-1]);
        cur.push_back(s[i]);
        int curi = to_int(cur);
        if(curi % 4 == 0){
            ans+=(i);
        }
    }
    for(int i = 0; i<(int)s.size(); i++){
        if(s[i]=='0' or s[i]=='4' or s[i] == '8')ans++;
    }
    cout << ans << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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