#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int ans = 0;
    int n; cin >> n;
    std::vector<int>v(n+1);
    for(int i = 1; i<=n; i++){
        cin >> v[i];
    }
    int l = 0, r = n-1;
    for(int i = 1; i<=n; i++){
        if(v[i]!=v[n]){
            l = n - i;
            break;
        }
    }
    for(int i = n; i>=1; i--){
        if(v[i]!=v[1]){
            r = i-1; break;
        }
    }
    cout<< max(r,l)<<endl;
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