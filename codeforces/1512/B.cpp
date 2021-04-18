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
const int maxn = 200005;
const int mod = 1000000007;

void task(){
    int n; cin >> n;
    std::vector<string>cells(n);
    rep(i, n)cin >> cells[i];
    std::vector<pair<int, int> > id;
    rep(i, n){
        rep(j, n){
            if(cells[i][j] == '*')id.emplace_back(i, j);
        }
    }
    
    int fr = id[0].first, fc = id[0].second;
    int sr = id[1].first, sc = id[1].second;
    if(fr == sr){
        if(fr+1 < n)cells[fr+1][fc] = cells[sr+1][sc] = '*';
        else cells[fr-1][fc] = cells[sr-1][sc] = '*';
    }
    else if(fc == sc){
        if(fc+1 < n)cells[fr][fc+1] = cells[sr][sc+1] = '*';
        else cells[fr][fc-1] = cells[sr][sc-1] = '*';
    }
    else{
        cells[fr][sc] = cells[sr][fc] = '*';
    }

    rep(i, n){
        cout << cells[i]<<endl;
    }
}

int main(){
    ios_base :: sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifdef _Local
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