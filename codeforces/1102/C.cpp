#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, x, y; cin >> n >> x >> y;
    std::vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }

    int ans = 0;
    for(int i = 0; i<n;i++){
        if(v[i]<=x)ans++;
    }
    ans+=1;
    ans/=2;
    cout << (x>y ? n : ans) << endl;

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