#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        int n; cin >> n;
        std::vector<int>v(n);
        std::vector<bool>mark(4000,0);
        for(int i = 0; i<n; i++){
            cin >> v[i];
            mark[v[i]] = 1;
        }

        for(int i = 1; i<=30001; i++){
            if(!mark[i]){
                cout << i << endl;
                break;
            }
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