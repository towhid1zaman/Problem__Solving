#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll gcd(ll a,ll b){
    return b ? gcd(b,a%b) : a;
}
ll lcm(ll a, ll b){
    return a/ gcd(a,b)*b;
}
bool chek(std::vector<int>a){
    int cnt = 0;
    for(int i : a){
        if(i = 1)cnt++;
    }

    return cnt == a.size();
}
void task(){
    int n; cin >> n;
    std::vector<int>a(n);
    int one = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(a[i] == 1)one++;
    }
    
    int g = 0;
    for(int i = 0; i<n; i++){
        g = gcd(g, a[i]);
    }
    if(g!=1){
        cout << -1 << endl;
        return;
    }
    if(one){
        cout << n - one << endl;
        return;
    }
    int ans = 0, moves = INT_MAX;
    for(int i = 0, j; i<n; i++){
        int g = a[i];
        for(j = i+1; j<n; j++){
            g = gcd(g, a[j]);
            if(g==1)moves = min(moves, j-i+n-1);
        }
    }
    cout << moves << endl;
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