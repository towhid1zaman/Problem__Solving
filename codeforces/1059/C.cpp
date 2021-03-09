/*
これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました
*/
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

void task(){
    ll n; cin >> n;
    std::vector<ll>ans;
    ll N = 1;
    while(n > 3){
        for(int i = 1; i<=(n+1)/2; i++){
            ans.push_back(N);
        }
        N*=2;
        n/=2;
    }    

    if(n==1)ans.push_back(N);
    else if(n==2)ans.push_back(N), ans.push_back(2*N);
    else ans.push_back(N), ans.push_back(N), ans.push_back(3*N);
    for(auto x:ans){
        cout << x <<' ';
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