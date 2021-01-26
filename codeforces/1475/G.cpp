#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

std::vector<int>divisor[maxn];
void d(){
    for(int i = 1; i<maxn; i++){
        for(int j = i; j<maxn; j+=i){
            divisor[j].push_back(i);
        }
    }
}
void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    sort(all(a));
    int mn = 0;
    std::vector<int>cnt(maxn, 0);
    for(int i = 0; i<n; i++){
        int now = 0;
        for(int dd: divisor[a[i]]){
            now = max(now, cnt[dd]);
        }
        cnt[a[i]] = now+1;
        mn = max(mn, cnt[a[i]]);
    }

    cout << n - mn << endl;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
#ifdef OJ
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    d();
    int T = 1; cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}