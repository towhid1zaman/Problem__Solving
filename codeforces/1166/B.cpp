#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){

    // possible only if atleast 5 row and 5 column
    string v = "aeiou";
    int n; cin >> n;
    bool f = 0;
    int i = 5;
    for(;i<=n; i++){
        if(n%i==0){
            f = 1;
            break;
        }
    }
    if((n/i)>=5 and ((n/i)*i==n))f = 1;
    else f = 0;
    int N = i, M = n/i;
    if(f){
        for(int i = 1; i<=N; i++){
            for(int j = 1; j<=M; j++){
                cout << v[(i+j)%5];
            }
        }
        cout << endl;
    }
    else cout << -1 << endl;
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