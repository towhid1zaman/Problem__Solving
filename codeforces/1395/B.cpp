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
    int x, y; cin >> x >> y;
    std::vector< pair<int,int> > ans;
    ans.emplace_back(x,y);
    ans.emplace_back(1,y);
    std::map<pair<int,int>, bool> vis;
    vis[{x,y}] = 1, vis[{1,y}] = 1;
    for(int i = 1; i<=n; i++){
        if(i%2)for(int j = 1; j<=m; j++){
            if(!vis[{i,j}]){
                ans.emplace_back(i,j); vis[{i,j}] = 1;
            }
        }
        else for(int j = m; j>=1;j--){
            if(!vis[{i,j}]){
                ans.emplace_back(i,j); vis[{i,j}] = 1;
            }
        }
    }
    for(int i = 0; i<ans.size(); i++){
        cout << ans[i].first <<' ' << ans[i].second<< endl;
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