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
ll next(ll a, ll b){
    for(ll i = min(a, b); i<=max(a, b); i++){
        if(gcd(a, i)==1 and gcd(b,i)==1)return i;
    }
}
void task(){
    int n; cin >> n; 
    std::vector<ll>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    for(int i = 1;i<n; i++){
        if(gcd(a[i-1], a[i])!=1)cnt++;
    }
    cout << cnt << endl;
    std::vector<ll>ans;
    std::map<int, bool> mark;
    cout << a[0]<<' ';
    for(int i = 1; i<n; i++){
        if(i<n and gcd(a[i-1], a[i])!=1){
            cout << 1<<' ';
        }
        cout << a[i]<<' ';
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