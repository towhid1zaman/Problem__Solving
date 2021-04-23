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
const int maxn = 567;
const int mod = 1000000007;

std::vector<int> a(maxn, 0);
std::vector<vector<int>>sol(maxn, vector<int>(maxn, 0));
void chek(int ind, int n){
    int now = a[ind];
    int curx = ind;
    int cury = ind;
    while(now > 0){
        sol[curx][cury] = a[ind]; now--;
        if(!sol[curx+1][cury] and curx<n){
            curx++;
            continue;
        }
        else cury--;
    }
}
void task(){
    int n; cin >> n;
    rep1(i,1,n)cin >> a[i];
    for(int i = n; i>=1; i--)chek(i, n);
    int nl = 1;
    rep1(i,1,n){
        if(i>1)cout << endl;
        rep1(j,1,i){
            cout << sol[i][j]<<' ';
        }
    }
    cout << endl;
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