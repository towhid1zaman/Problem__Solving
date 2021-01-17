#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int a, b, c, d; cin >>a >> b >> c >> d;
    std::vector<ll>v;
    int cnt = 0;
    while(cnt < 1000000){
        v.push_back(b+cnt*a);
        cnt++;
    }
    for(int i = 0; i<1000000; i++){
        ll time = d + i*c;
        if(binary_search(all(v), time)){
            cout << time << endl;
            return;
        }
    }

    cout << -1 << endl;
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