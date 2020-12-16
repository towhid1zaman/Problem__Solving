#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    if(n > 45){
        //1234568789 = 45 largest possible
        cout << -1 << endl;
        return;
    }
    std::vector<int>ans;
    int d = 9;
    while(n){
        if(n >= d){
            ans.push_back(d);
            n-=d;
        }
        else ans.push_back(n), n-=n;
        d--;
    }
    reverse(ans.begin(), ans.end());
    for(auto c: ans)cout << c; cout << endl;
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