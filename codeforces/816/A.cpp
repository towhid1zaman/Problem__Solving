#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


bool ok(int x,int y){
    return (x/10==y%10)&&(x%10==y/10);
}

void task(){
    int h,m; char ch; cin >> h >> ch >> m;
    int _h = h, _m = m;
    int ans = 0;
    while(!ok(h,m)){
        ans++;
        if (m == 59) {
            m = 0;
            h++;
            h %= 24;
        }
        else m++;
    }
    cout << ans << endl;
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