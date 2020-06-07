
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;
const int maxn = 2000100;



int main(){
        _
        ll n; cin >> n;
        vll a(n,0);
        rep(i,n) cin >> a[i];
        ll res = 0;
        if(n>3){
            rep(i,n){
                rep1(j,1,n-1){
                    rep1(k,1,n-1){
                        ll chek = a[i]|a[j]|a[k];
                        if(chek>res) res = chek;
                    }
                }
            }
            cout<<res<<endl;
        }
        else{
            res = a[0];
            rep1(i,1,n-1){
                res = res|a[i];
            }
            cout<<res<<endl;
        }

return 0;
}

