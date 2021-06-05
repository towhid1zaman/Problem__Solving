/*これを翻訳している間、あなたはあなたの人生のいくつかの貴重な瞬間を無駄にしました*/
#pragma comment (linker,"/STACK:16777216")
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
#define endl "\n"
#define pb push_back
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define all(v) (v).begin(),(v).end()

const double pi = acos(-1.0);
const int maxn = 200005;
const int mod = 1000000007;


namespace grid_operations{
    const int dx4[4]= {0,0,1,-1}, dy4[4]= {1,-1,0,0};
    string ds="UDRL"; //Record Path
    // UP, RIGHT, DOWN, LEFT, UPPER-RIGHT, LOWER-RIGHT, LOWER-LEFT, UPPER-LEFT
    const int dx8[8] = {-1, 0, 1, 0, -1, 1,  1, -1};
    const int dy8[8] = { 0, 1, 0,-1,  1, 1, -1, -1};
    // Represents all moves of a knight in a chessboard
    const int dxKnightMove[8] = {-1, -2, -2, -1,  1,  2, 2, 1};
    const int dyKnightMove[8] = { 2,  1, -1, -2, -2, -1, 1, 2};
    // 0 indexed
    bool is_inside(int x, int y,int n, int m){ 
        return x >= 0 && y >= 0 && x < n && y < m; 
    }
}using namespace grid_operations;


void task(){
    int n, m; cin >> n >> m;
    char c; cin >> c;
    int cnt = 0;
    std::vector<string>a(n);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    set<char>s;
    bool ok = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            if(a[i][j] == c){
                for(int d = 0; d<4; d++){
                    int ni = i+dx4[d];
                    int nj = j+dy4[d];
                    if(!is_inside(ni, nj, n, m) or a[ni][nj]==c or a[ni][nj] == '.'){
                        continue;
                    }
                    s.insert(a[ni][nj]);
                }
            }
        }
    }
    cnt = (int)s.size();
    cout << cnt << endl;
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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