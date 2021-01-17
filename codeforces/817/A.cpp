#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
    int x, y; cin >> x >> y;
    int oox = abs(x1-x2), ooy = abs(y1-y2);
    bool f = oox%x!=0 or ooy%y!=0;
    if(f){
        cout << "NO"<<endl;
        return;
    }
    oox/=x, ooy/=y;
    int del = abs(oox - ooy);
    cout << (del%2==0?"YES":"NO") << endl;
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