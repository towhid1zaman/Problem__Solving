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
    std::vector<int>L(n), R(n);
    std::vector<int>seq1, seq2;
    seq1.clear(), seq2.clear();
    for(int i = 0; i<n;i++){
        cin >> L[i] >> R[i];
        seq1.push_back(R[i]), seq2.push_back(L[i]);
    }

    sort(all(seq1)), sort(all(seq2));

    int ans = n;
    for(int i = 0; i<n;i++){
        int pos1 = lower_bound(all(seq1), L[i]) - seq1.begin();
        int pos2 = upper_bound(all(seq2), R[i]) - seq2.begin();
        ans = min(ans, pos1 + n - pos2);
    }

    cout << ans << endl;
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