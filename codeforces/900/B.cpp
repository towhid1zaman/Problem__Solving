#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll a, b, c; cin >> a >> b >> c;

    // untill c is found or periodic

    set<int>vis;
    int pos = 1;
    int d = a/b;
    a%=b;
    while(true){
        a*=10;
        d = a/b;
        if(vis.count(a)){
            cout << -1 << endl;
            return;
        }
        if(d==c){
            cout << pos << endl;
            return;
        }
        vis.emplace(a);
        a%=b;
        pos++;
    }
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