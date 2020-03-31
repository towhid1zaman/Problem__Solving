
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const int INF = 1e9 + 10;
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            ll a,b,c,d; cin >> a >> b >> c >> d;
            ll x,y,x1,y1,x2,y2; cin >> x >> y >> x1 >> y1 >> x2 >> y2;
            bool ans = true;
            if (x - x1 < a - b){
                    ans = false;
            }
            if (x2 - x < b - a){
                    ans = false;
            }
            if (y - y1 < c - d){
                    ans = false;
            }
            if (y2 - y < d - c){
                    ans = false;
            }
            if (a + b != 0 and x1 == x2){
                    ans = false;
            }
            if (c + d != 0 and y1 == y2){
                    ans = false;
            }
            if(ans){
                cout<<"Yes"<<endl;
            }
            else cout<<"No"<<endl;
    }


return 0;
}






