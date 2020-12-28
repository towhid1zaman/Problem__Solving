#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n; std::vector<int>R(n,0);
    for(int i = 0; i<n; i++){
        cin >> R[i];
    }
    int m; cin >> m; std::vector<int>B(m,0);
    for(int i = 0; i<m; i++){
        cin >> B[i];
    }

    std::vector<int>r(n+1, 0), b(m+1, 0);
    for(int i = 0; i<n; i++) r[i+1] = r[i] + R[i];
    for(int i = 0; i<m; i++) b[i+1] = b[i] + B[i];

    cout << *max_element(r.begin(), r.end()) + *max_element(b.begin(), b.end()) << endl;
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