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
const int maxn = 1000006;
const int mod = 1000000007;

void task(){
    string s; cin >> s;
    std::vector<int>dp_pos(maxn, 0), dp_last(maxn, 0), dp_freq(maxn, 0);
    int n = (int)s.size();
    stack<int>stk;
    int mx_len = 0;
    dp_freq[0] = 1;
    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            stk.push(i);
        }
        else{
            if(stk.empty()){
                dp_pos[i] = -1;
                dp_last[i] = -1;
            }
            else{
                int open = stk.top();
                stk.pop();
                dp_pos[i] = open;
                dp_last[i] = open;
                if(open > 0 and dp_pos[open - 1] >= 0 and s[open-1]==')'){
                    dp_last[i] = dp_last[open-1];
                }
                int len = i - dp_last[i] + 1;
                dp_freq[len]++;
                mx_len = max(mx_len, len);
            }
        }
    }
    cout << mx_len <<' '<< dp_freq[mx_len] << endl;
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