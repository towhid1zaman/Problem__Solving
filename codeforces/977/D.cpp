
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
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back
#define inf (1<<29)

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

ll comp(ll x,ll p){
    ll cnt = 0;
    while(x%p==0){
        cnt++;
        x/=p;
    }

    return cnt;
}

bool chek(ll x,ll y){
    if(comp(x,2)==comp(y,2)) return comp(x,3) > comp(y,3);
    else return comp(x,2) < comp(y,2);
}

int main(){
        _ios;

        ll n; cin >> n;
        vll a(n);
        rep(i,n) cin >> a[i];
        sort(all(a),chek);

        for(auto x : a)cout<<x<<' '; cout<<endl;



return 0;
}

