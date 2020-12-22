#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    string s; cin >> s;
    int s3 = 0;
    int ev = 0, ze = 0;
    for(char c:s){
        s3 += c-'0';
        if(c=='0' and !ze)ze = 1;
        else if((c-'0')%2 == 0) ev = 1;
    }
    if(s3%3==0 and(ev and ze)){
        cout <<"red"<<endl;
    }
    else cout << "cyan" << endl;

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