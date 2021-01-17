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
    int od = mod;
    int f = 0;
    for(int i = 0;i< n; i++){
        cin >> a[i];
        if(a[i]%2 and a[i]<od)od = a[i], f = 1;
    }
    int tot = accumulate(all(a), 0);
    if(!f)cout << 0 << endl;
    else if(tot==od){
        cout << tot << endl;
    }
    else if(tot%2==0){
        cout << tot - od << endl;
    }
    else{
        cout << tot << endl;
    }
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