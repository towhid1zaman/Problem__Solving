#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

ll a,b;
void task(){
    cin >> a >> b;
    while(a and b){
        if(a>=2*b){
            a%=2*b;
            continue;
        }
        else if(b>=2*a){
            b%=2*a;
            continue;
        }
        else break;
    }
    cout << a <<' '<<b << endl;
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