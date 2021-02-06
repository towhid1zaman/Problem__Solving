#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    ll n, k; cin >> n >> k;

    if(k > 42 ){
        cout << "No" << endl;
        return;
    }
    
    std::vector<bool>ind(100, 0);
    for(ll i = 1; i<=k; i++){
        ll rem = n%i;
        if(ind[rem]){
            cout <<"No"<<endl;
            return;
        }
        ind[rem] = 1;
    }

    cout << "Yes"<<endl;
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