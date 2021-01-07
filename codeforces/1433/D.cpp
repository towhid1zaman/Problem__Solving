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
    std::vector<int>v(n+1);
    int cnt = 0;
    for(int i = 1; i<=n; i++){
        cin >> v[i];
        if(v[i] != v[i-1])cnt++;
    }
    if(cnt == 1){
        cout << "NO" << endl;
        return;
    }
    cout << "YES"<<endl;
    int last = 1;
    for(int i = 2; i<=n; i++){
        if(v[i] != v[1]){
            cout << 1 << ' '<< i<<endl;
            last = i;
        }
    }
    for(int i = 2; i<=n; i++){
        if(v[i] == v[1]){
            cout << last <<' '<<i<<endl;
        }
    }
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