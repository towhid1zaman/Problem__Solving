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
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    string s; cin >> s;
    int n = (int)s.size();
    std::vector<int> dp(n, 0);
    stack<int>stk;
    int mx_len = 0, mx_cnt = 0;

    for(int i = 0; i<n; i++){
        if(s[i] == '('){
            stk.push(i);
        }
        else{
            if(stk.empty())continue;

            int j = stk.top();
            stk.pop();
            int len = i-j+1;
            if(j >= 1){
                dp[i] = len + dp[j-1];
            }
            else{
                dp[i] = len;
            }
            if(dp[i] > mx_len){
                mx_len = dp[i];
                mx_cnt = 1;
            }
            else if(dp[i] == mx_len)mx_cnt++;
        }
    }
    if(mx_len == 0) mx_cnt = 1;

    cout << mx_len <<' '<<mx_cnt << endl;
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