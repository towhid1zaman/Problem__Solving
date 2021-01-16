#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, x; cin >> n >> x;
    std::vector<int>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    ll mn_ans = 0, mx_ans = 0;;
    for(int i = 0; i<n; i++){
        int y = a[i];
        mx_ans+=(y/x);
        if(y%x)mx_ans++; //(y+x-1)/x;
    }
    ll tot = accumulate(all(a), 0ll);
    mn_ans = tot/x;
    if(tot%x)mn_ans++;
    cout << mn_ans <<' '<<mx_ans<<endl;
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