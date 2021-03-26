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
    stack<char>stk;
    std::map<char,int>tkn1, tkn2;

    for(char c: s){
        tkn1[ c ]++; 
    }

    rep(i, n){
        if(tkn2[ s[i] ] > 0){
            tkn1[ s[i] ]--;
            continue;
        }

        while(stk.size() > 0 and stk.top() <= s[i] and tkn1[ stk.top() ] > 0){
            tkn2[ stk.top() ]--;
            stk.pop();
        }

        stk.push(s[i]);
        tkn1[ s[i] ]--;
        tkn2[ s[i] ]++;
    }

    string ans = "";
    while(!stk.empty()){
        ans+=stk.top();
        stk.pop();
    }

    reverse(all(ans));

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