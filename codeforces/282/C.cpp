#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
        string a, b; cin >> a >> b;
        if(a.size() != b.size()){
            cout << "NO" << endl;
            return;
        }
        bool f = 0, ff = 0;
        for(int i = 0; i<a.size(); i++){
            if(a[i] == '1')f = 1;
        }

        for(int i = 0; i<b.size();i++){
            if(b[i] == '1')ff = 1;
        }
        f = (f==ff);
        if(!f){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
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