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
const int maxn = 2000006;
const int mod = 1000000007;


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
        while (idx <= N){
            tree[idx] = max(tree[idx], val);
            idx += idx & -idx;
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
        while (idx > 0){
            ans = max(ans, tree[idx]);
            idx -= idx & -idx;
        }
        return ans;
    }
};

void task(){
    int n; cin >> n;
    string s; cin >> s;
    std::vector<int> p[27];
    for(int i = 0; i<n; i++){
        p[s[i]-'a'].push_back(i+1);
    }
    for(int i = 0; i<27; i++){
        if(p[i].size()>0)reverse(p[i].begin(), p[i].end());
    }
    reverse(s.begin(), s.end());

    FenwickTree bit;
    bit.build(n);

    ll ans = 0;
    for(int i = 0; i<n ; i++){
        int now = p[s[i]-'a'].back();
        p[s[i]-'a'].pop_back();
        ans += bit.rsum(now, n);
        bit.update(now, 1);
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