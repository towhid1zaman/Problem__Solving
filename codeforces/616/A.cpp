#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    string a, b; cin >> a >> b;

    reverse(all(a)), reverse(all(b));
    while(a.size()>1 and a.back() == '0')a.pop_back();
    while(b.size()>1 and b.back() == '0')b.pop_back();
    reverse(all(a)), reverse(all(b));

    if(a==b)cout << '=' << endl;
    else if(a.size() > b.size()) cout << '>'<<endl;
    else if(a.size() < b.size()) cout << '<'<<endl;
    else if(a<b)cout << '<' << endl;
    else cout << '>' << endl;
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