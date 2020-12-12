#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        int n, k; cin >> n >> k;
        pair<int,int>a[n];

        for(int i = 0; i<n; i++){
            cin >> a[i].first >> a[i].second;
        }

        sort(a,a+n);
        reverse(a,a+n);

        int ans = INT_MIN;

        for(int i = 0; i<n; i++){
            int temp = a[i].second < k ? a[i].first : a[i].first - (a[i].second - k);
            ans  = max(ans, temp);
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

        int T = 1; //cin >> T;
        for(int __ = 1; __ <= T; __++){
            //cout <<"Case "<<__<<": ";
            task();
        }
      
return 0;
}