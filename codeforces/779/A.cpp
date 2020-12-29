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
    std::vector<int>a(200,0), aa(200,0);
    for(int i = 0; i<n; i++){
        int m; cin >> m; a[m]++, aa[m]++;
    }
    for(int i = 0; i<n;i++){
        int m; cin >> m; a[m]++;
    }
    bool f = 0;
    for(int i = 1; i<=5; i++){
        if(a[i]%2)f = 1;
        else a[i]/=2;
    }
    int ans = 0;
    for(int i = 1; i<=5; i++){
        ans+=abs(a[i]-aa[i]);
    }
    cout << (f ? -1 : ans/2) << endl;
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