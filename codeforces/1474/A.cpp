#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n; cin >> n;
    string s; cin >> s;
    string ans="";
    int last = -1;
    //011
    //110
    //121
    for(char c:s){
        if(c == '1'){
            if(last == 2){
                ans+='0', last = 1;
            }
            else{
                ans+='1', last = 2;
            }
        }
        else if(c == '0'){
            if(last==1){
                ans+='0', last = 0;
            }
            else{
                ans+='1', last = 1;
            }
        }
    }
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