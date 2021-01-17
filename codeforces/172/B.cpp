#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int a, b, m, r0; cin >> a >> b >> m >> r0;
    std::vector<int>seen(maxn, 0);
    int ind = 1;
    while(!seen[r0]){
        seen[r0] = ind++;
        r0 =  (r0*a + b)%m;
    }
    cout << ind - seen[r0];
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