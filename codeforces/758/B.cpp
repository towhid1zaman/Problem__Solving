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
    int n = s.size();
    std::vector<int>ans(1000, 0), freq(1000, 0);

    for(int i = 0;i<n; i++){
        freq[ s[i] ]++;
    }

    for(int j = 0; j<n; j++){
        for(int i = 0; i<n; i++){
            if(s[i] == '!'){
                if(i+4 < n and s[i+4] !='!'){
                    s[i] = s[i+4];
                }
                else if(i-4 >= 0 and s[i-4]!='!'){
                    s[i] = s[i-4];
                }
                ans[ s[i] ]++; 
            }
        }
    }
    cout << ans['R'] << ' '<< ans['B'] <<' '<< ans['Y'] <<' '<<ans['G']<<endl;
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