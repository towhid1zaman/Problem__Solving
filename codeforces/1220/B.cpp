#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <ll, ll> pll;
typedef vector<pll>vip;
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
const int N = 1005;
ll n;
ll m[N][N];
ll ans[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    cin>>n;
    rep(i,1,n){
        rep(j,1,n){
            cin>>m[i][j];
        }
    }
    ll chek = m[1][2]*m[1][3]/m[2][3];
    chek = sqrt(chek);
    ans[1]=chek;
    rep(i,2,n){
        ans[i]=m[1][i]/ans[1];
    }
    rep(i,1,n){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
return 0;
}



