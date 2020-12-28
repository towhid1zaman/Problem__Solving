#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    std::vector<int>a(n), b(n);
    for(int i = 0; i<n; i++) cin >> a[i];
    for(int i = 0; i<n; i++) cin >> b[i];
    std::vector<int>ans, vis(n+1, 0);
    int pos = 0;
    for(int i = 0; i<n; i++){
        if(vis[ b[i] ]){
            ans.push_back(0);
            continue;
        }
        int tot = 0;
        while(true){
            tot++;
            vis[ a[pos] ] = true;
            if(a[pos] == b[i])break;
            pos++;
        }
        pos++;
        ans.push_back(tot);
    }

    for(int &x:ans) cout << x << ' '; cout << endl;
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