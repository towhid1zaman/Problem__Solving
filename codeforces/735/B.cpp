#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, n1 , n2; cin >> n >> n1 >> n2;
    std::vector<int>a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    std::vector<int>N1, N2;
    sort(all(a)), reverse(all(a));
    long double s1 = 0,s2 = 0;
    for(int i = 0; i<min(n1, n2); i++){
        s1+=a[i];
    }
    int m = max(n1,n2);
    for(int i = min(n1, n2);m; m--,i++){
        s2+=a[i];
    }
    long double ans = (s1)/min(n1,n2) + (s2)/max(n1,n2);
    cout <<setprecision(10)<<fixed<< ans << endl; 
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