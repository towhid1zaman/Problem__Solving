#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n;  cin >> n;
    std::vector<int> v(n);
    ll a = 0, b = 0;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    sort(all(v)), reverse(all(v));
    for(int i = 0; i<n; i++){
        if(i%2==0){
            if(v[i]%2==0)a+=v[i];
        }
        else{
            if(v[i]%2==1)b+=v[i];
        }
    }
    string ans = "Tie";
    if(a<b)ans = "Bob";
    else if(a>b)ans = "Alice";
    cout << ans << endl;
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