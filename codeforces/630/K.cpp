#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll inex(ll n, ll m){
    return n/m;
}
void task(){
    ll n; cin >> n;
    ll ans = 0;
    ll possible = n;

    possible-=inex(n, 2);
    possible-=inex(n, 3);
    possible-=inex(n, 5);
    possible-=inex(n, 7);
    possible+=(inex(n, 2*3));
    possible+=(inex(n, 2*5));
    possible+=(inex(n, 2*7));
    possible+=(inex(n, 3*5));
    possible+=(inex(n, 3*7));
    possible+=(inex(n, 5*7));
    possible-=(inex(n, 2*3*5));
    possible-=(inex(n, 2*3*7));
    possible-=(inex(n, 2*5*7));
    possible-=(inex(n, 3*5*7));
    possible+=(inex(n, 2*3*5*7));


    cout << possible << endl;
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