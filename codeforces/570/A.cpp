#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 200005;
const int mod = 1000000007;


void task(){
    int n, m; cin >> n >> m;
    map<int, int>mp;
    std::vector<int>v;

    for(int i = 1; i<=m; i++){
        int mx = -1, winner = 0;
        for(int j = 1; j<=n; j++){
            int k; cin >> k;
            if(k> mx){
                mx = k;
                winner = j;
            }
        }
        v.push_back(winner);
        mp[winner]++;
    }

    sort(all(v));
    int mx = -1, winner = 0;
    for(int ind:v){
        if(mp[ ind ] > mx){
            mx = mp[ ind ];
            winner = ind;
        }
    }
    cout << winner << endl;
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