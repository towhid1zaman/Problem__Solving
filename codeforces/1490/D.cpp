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
const int maxn = 222;
const int mod = 1000000007;

std::vector<int>a(maxn, 0), depth(maxn, 0);

void dfs(int l, int r, int d_cnt){
    //base case
    if(l > r)return;

    int mx_val = 0, mx_id = 0;
    for(int i = l; i<=r; i++){
        if(mx_val < a[i]){
            mx_id = i;
            mx_val = a[i];
        }
    }
    // fill depth
    depth[mx_id] = d_cnt;

    dfs(l, mx_id-1, d_cnt+1); // check left
    dfs(mx_id+1, r, d_cnt+1); // check right
}

void task(){
    int n; cin >> n;
    for(int i = 1; i<= n; i++){
        cin >> a[i];
    }

    dfs(1,n,0);

    for(int i = 1; i<=n; i++){
        cout << depth[i]<<' ';
    }
    cout << endl;
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