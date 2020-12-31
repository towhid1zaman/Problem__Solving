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
    std::vector<int>a(n);
    int mn = mod;
    for(int i = 0; i<n; i++){
        cin >> a[i]; mn = min(mn, a[i]);
    }
    std::vector<int>pos;
    for(int i = 0; i<n; i++){
        if(a[i]==mn)pos.push_back(i+1);
    }
    int mn_ans = mod;
    for(int i = 0; i<pos.size()-1; i++){
        mn_ans = min(mn_ans, abs(pos[i] - pos[i+1]));
    }
    cout << mn_ans << endl;

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