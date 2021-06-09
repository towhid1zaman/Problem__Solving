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
const int maxn = 5e5 + 5;
const int mod = 1000000007;


struct Lady{
    int B, I, R;
}L[500037];
std::vector<int>v;

struct FenwickTree{
    int N;
    std::vector<int>tree;
    void build(int n){
        N = n;
        tree.assign(n + 1, 0);
    }
    void update(int idx, int val){
        while (idx <= N){
            tree[idx] += val;
            idx += idx & -idx;
        }
    }
    void updateMax(int idx, int val){
        while (idx > 0){
            tree[idx] = max(tree[idx], val);
            idx -= idx & -idx;
        }
    }
    //mainly Query
    int pref(int idx){
        int ans = 0;
        while (idx > 0){
            ans += tree[idx];
            idx -= idx & -idx;
        }
        return ans;
    }
    //range sum
    int rsum(int l, int r){
        return pref(r) - pref(l - 1);
    }
    int prefMax(int idx){
        int ans = -2e9;
        while (idx < N){
            ans = max(ans, tree[idx]);
            idx += idx & -idx;
        }
        return ans;
    }
};




void task(){
    int n; cin >> n;
    std::map<int, int> mp;
    for(int i = 0; i<n; i++) cin >> L[i].B;
    for(int i = 0; i<n; i++) cin >> L[i].I, v.push_back(L[i].I);
    for(int i = 0; i<n; i++) cin >> L[i].R;
    
    sort(all(v)), v.resize(unique(v.begin(), v.end()) - v.begin());
    for(int i = 0; i<n; i++){
        int cur = lower_bound(all(v), L[i].I) - v.begin() + 1;
        L[i].I = cur;
    }
    
    int ans = 0;
    sort(L, L+n, [](Lady x, Lady y){
        return (x.B ^ y.B ? (x.B < y.B) : (x.I > y.I));
    });
    

    FenwickTree bit;
    bit.build(maxn);
    for(int i = n-1; ~i; i--){
        int cur = bit.prefMax(L[i].I + 1);
        if(cur > L[i].R) ans++;
        bit.updateMax(L[i].I, L[i].R);
    }
    cout << ans << endl;
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