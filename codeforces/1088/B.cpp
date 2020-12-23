#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, k; cin >> n >> k;
    set<int>a;
    for(int i = 0; i<n; i++){
        int aa;cin >> aa; a.insert(aa);
    }
    int tot = 0;
    auto p = a.begin();
    for(int i = 0;i<k; i++){
         int N = *p - tot;
         if(N<0)N = 0;
         cout << N << endl;
         tot+=N;
         p++;
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