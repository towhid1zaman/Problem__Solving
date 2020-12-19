#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    ll r, g , b, w; cin >> r >> g >> b >> w;
    bool chek = ((r%2 + g%2 + b%2 + w%2) <= 1) or 
                (r==0 and g==0 and b==0 and w==0);
    if(chek){
        cout << "YES"<<endl;
        return;
    }
    chek = (r==0 or g==0 or b==0);
    if(chek){
        cout <<"NO"<<endl;
        return;
    }
    chek = (r>0 and g>0 and b>0);
    r--,g--,b--,w++;
    chek &= ((r%2 + g%2 + b%2 + w%2) <= 1);
    cout << (chek ? "YES":"NO")<<endl;
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