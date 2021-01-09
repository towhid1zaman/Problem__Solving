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
    std::vector<int>adj[n+1];
    for(int i = 1; i<=n-1; i++){
        int a; cin >> a;
        adj[a].push_back(i+1);
    }

    bool ans = 1;
    for(int i = 1; i<n; i++){
        if(adj[i].size()==0)continue;

        int leaf = 0;
        for(int j = 0; j<adj[i].size(); j++){
            if(adj[ adj[i][j] ].size()==0)leaf++;
        }
        if(leaf<3){
            ans = 0;
            break;
        }
    }

    cout <<(ans ? "YES" : "NO")<<endl;
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