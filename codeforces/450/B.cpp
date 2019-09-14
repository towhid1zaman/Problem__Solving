#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;

ll md(ll x){
    x%=mod;
    if(x>=0)return x;
    else return x+mod;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    ll x,y;
    cin>>x>>y;
    ll n;
    cin>>n;
    /// 6 cycles Fi = Fi-1 + Fi+1 => Fi+1 = Fi-1 - Fi;
    ll f[6];
    f[1]=x;
    f[2]=y;
    f[3] = f[2] - f[1];
    f[4] = f[3] - f[2];
    f[5] = f[4] - f[3];
    f[0]=f[5]-f[4];
    ll ans = md(f[n%6]);
    cout<<ans<<endl;








return 0;
}





