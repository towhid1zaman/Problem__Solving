#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;

bool chek(int a, int b, int c, int i){
    return (c - (i*a))%b==0;
}
void task(){
    int a,b,c;
    cin >> a >> b >> c;
    for(int i = 0; i*a<=c; i++){
        if(chek(a,b,c,i)){
            cout <<"Yes"<<endl;
            return;
        }
    }
    cout <<"No"<<endl;
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