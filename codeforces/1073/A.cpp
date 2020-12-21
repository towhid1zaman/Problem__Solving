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
    set<char>ss; for(char c: s)ss.insert(c);
    if(ss.size()==1){
        cout << "NO" << endl;
        return;
    }
    string a;
    for(int i = 1; i<s.size(); i++){
        if(s[i] !=s[i-1]){
            a.push_back(s[i-1]);
            a.push_back(s[i]);
            break;
        }
    }

    cout << "YES" << endl;
    cout << a << endl;
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