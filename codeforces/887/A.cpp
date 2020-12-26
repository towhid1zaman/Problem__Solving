#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    //1 000 000 binary rep of 64 , total 0 = 6

    string s; cin >> s;
    int one = 0, next0 = 0;
    for(int i = 0; i<s.size(); i++){
        if(s[i] == '1')one = 1;
        if(s[i]=='0' and one)next0++;
    }
    cout << (one and next0>=6 ? "YES":"NO")<<endl;
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