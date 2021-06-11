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
const ll mod = 10000000007;

void task(){
    int n = 4;
    std::map<pair<ll, ll>, int> Map;
    Map.clear();
    ll xmn = 0;
    ll ymn = 0;
    bool ok = 1;
    for(int i = 0; i<n; i++){
        ll x1, y1, x2, y2; cin >> x1 >> y1 >> x2 >> y2;
        Map[{x1,y1}]++;
        Map[{x2,y2}]++;
        if(x1==x2)xmn++;
        else if(y1==y2)ymn++;
        else ok = 0;
    }
    if(Map.size() != 4){
        cout << "NO" << endl;
        return;
    }
    if(xmn!=2 and ymn!=2){
        cout << "NO" << endl;
        return;
    }
    for(auto c:Map){
        if(c.second!=2)ok=0;
    }
    cout <<(ok? "YES":"NO") << endl;
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