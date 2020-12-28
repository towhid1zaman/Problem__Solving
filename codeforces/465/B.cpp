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
    std::vector<int>LetterList(n);
    for(int i = 0; i<n; i++){
        cin >> LetterList[i];
    }
    int ans = 0, pos = 0;
    while(pos < n and LetterList[pos]==0)pos++;
    int op = 1;
    for(int i = pos; i<n; i++){
        if(LetterList[i]){
            ans+=op;
            op = 1;
        }
        else op = 2;
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

    int T = 1; //cin >> T;
    for(int __ = 1; __ <= T; __++){
        //cout <<"Case "<<__<<": ";
        task();
    }
      
return 0;
}