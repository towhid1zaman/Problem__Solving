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
    string s; cin >> s;
    for(int i = 0; i<s.size(); i++){
        if(i%2==0){
            for(char c = 'a'; c<='z'; c++){
                if(s[i]!=c){
                    s[i] = c;
                    break;
                }
            }
        }
        else{
            for(char c = 'z'; c>='a'; c--){
                if(s[i]!=c){
                    s[i] = c;
                    break;
                }
            }
        }
    }
    cout << s << endl;
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