#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define all(v) (v).begin(),(v).end()
#define endl "\n"
const int maxn = 205;
const int mod = 1000000007;

int a[maxn][maxn], b[maxn][maxn];
bool chek(int x, int y){
    return a[x][y]!=0 and a[x][y+1]!=0 and a[x+1][y]!=0 and a[x+1][y+1]!=0;
}
void Set(int x, int y){
    b[x][y] = 1, b[x][y+1] = 1, b[x+1][y] = 1, b[x+1][y+1] = 1;
}
void task(){
    int n, m; cin >> n >> m;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    int k = 0;
    std::vector<pair<int,int>>ans;

    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(chek(i,j)){
                Set(i,j);
                ans.emplace_back(i+1, j+1);
            }
        }
    }
    bool ok = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j] != b[i][j])ok = 1;
        }
    }
    if(ok)cout << -1 << endl;
    else{
        cout << ans.size() << endl;
        for(auto v:ans)cout << v.first<<' '<<v.second<<endl;
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