#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    ll n; cin >> n;
    std::vector<ll>a(n);

    for(int i = 0; i<n; i++){
        cin >> a[i];
    }

    if(n==1){
        cout << 1 <<' '<<1 <<endl;
        cout << 0 << endl;

        cout <<1 << ' '<<1 << endl;
        cout << 0 << endl;

        cout << 1 <<' '<<1 << endl;
        cout << -a[0]<<endl;

        return;
    }

    cout << 1 << ' '<<1<<endl;
    cout << -a[0]<<endl;

    cout << 1 <<' '<< n << endl;
    for(int i = 0; i<n; i++){
        if(!i)cout <<0<<' ';
        else cout << -n*a[i]<<' ';
    }
    cout << endl;

    cout <<2<<' '<<n << endl;
    for(int i = 1; i<n; i++){
        cout << (n-1)*(a[i])<<' ';
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