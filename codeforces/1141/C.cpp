/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int  n; cin >> n;
    std::vector<int>permutations(n);
    permutations[0] = 0;
    int mn = 0;
    for(int i = 1; i<n; i++){
        int q; cin >> q;
        permutations[i] = permutations[i-1] + q; // from equation
        mn = min(mn, permutations[i]);
    }

    for(int i = 0; i<n; i++){
        permutations[i] -= mn-1;
    }

    std::vector<int>cnt(n+1);

    for(int i = 0; i<n; i++){
        if(permutations[i] < 1 or permutations[i] > n){
            cout << -1 << endl;
            return;
        }
        cnt[ permutations[i] ]++;
    }

    for(int i = 1; i<=n; i++){
        if(cnt[i] > 1){
            cout << -1 << endl;
            return;
        }
    }

    for(int i = 0; i<n; i++){
        cout << permutations[i] <<' ';
    }
    cout << endl;
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