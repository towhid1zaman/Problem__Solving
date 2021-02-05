#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 1000005;
const int mod = 1000000007;

std::vector<int>D[maxn];
std::vector<int>cnt(maxn, 0), ans(maxn, 0);
int mx = 0;
void d(){
    for(int i = 1; i<maxn; i++){
        ans[i] = max(ans[i], cnt[i]);
        for(int j = 2*i; j<maxn; j+=i){
            ans[j] = max(ans[j], cnt[j] + ans[i]);
        }
    }
}
void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    set<int>s;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        cnt[ a[i] ]++;
        s.emplace(a[i]);
    }
    d();
    int res = 0;
    for(auto x: s){
        res = max(res, ans[x]);
    }
    cout << res << endl;
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