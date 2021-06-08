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
const int maxn = 1001000036;
const int mod = 1000000007;

struct Lady{
    int B, I, R;
}L[500037];

bool comp(Lady a, Lady b){
    return (a.B == b.B) ? (a.I == b.I) ? (a.R < b.R) : (a.I > b.I) : (a.B < b.B);
}

void task(){
    int n; cin >> n;
    std::map<int, int> mp;
    for(int i = 0; i<n; i++) cin >> L[i].B;
    for(int i = 0; i<n; i++) cin >> L[i].I;
    for(int i = 0; i<n; i++) cin >> L[i].R;
    
    int ans = 0;

    sort(L, L+n, comp);
    mp[maxn] = -maxn;
    mp[-maxn] = maxn;

    for(int i = n-1; i >= 0; i--){
        auto it = mp.upper_bound(L[i].I);
        if(it->second > L[i].R) ans++;
        else if(mp[ L[i].I ] < L[i].R){
            mp[ L[i].I ] = L[i].R;
            for(it = --mp.lower_bound( L[i].I ) ; it->second < L[i].R ; ){
                mp.erase(it--);
            } 
        }
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