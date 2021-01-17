#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

/*
*/
bool check(int p1, int p2, int p3, int p4,int x){
    return ( ( ( x%p1 )% p2 )% p3 )% p4 == x;
}
void task(){
    int p1,p2,p3,p4,a,b; cin >> p1 >> p2 >> p3 >> p4 >> a >> b;
    int ans = 0;
    for(int x = a; x<=b; x++){
        if(check(p1,p2,p3,p4,x))ans++;
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