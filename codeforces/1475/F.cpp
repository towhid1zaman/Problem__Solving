#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    vector<string>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    std::vector<string>b(n);
    for(int i = 0; i<n; i++){
        cin >> b[i];
    }

    for(int i = 0; i<n; i++){
        if(a[0][i] != b[0][i]){
            for(int j = 0; j<n; j++){
                a[j][i]^=1;
            }
        }
    }
    bool ans = 1;
    for(int i = 0; i<n; i++){
        if(a[i] != b[i]){
            for(int j = 0; j<n; j++){
                a[i][j]^=1;
            }
        }
        if(a[i]!=b[i]){
            ans = 0;
            break;
        }
    }

    cout << (ans ? "YES" : "NO") << endl;
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