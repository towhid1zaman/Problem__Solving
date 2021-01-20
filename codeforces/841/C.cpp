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
    std::vector<int>A(n);
    for(int i = 0; i<n; i++) cin >> A[i];
    
    std::vector< pair<int, int> > b;
    for(int i = 0; i<n; i++){
        int B; cin >> B;
        b.emplace_back(B, i);
    }

    std::vector<int>ans(n);


    sort(all(b)), sort(all(A));
    reverse(all(A));

    for(int i = 0; i<n; i++){
        int val = A[i];
        int index = b[i].second;
        ans[index] = A[i];
    }

    for(int i = 0; i<n; i++){
        cout << ans[i]<<' ';
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