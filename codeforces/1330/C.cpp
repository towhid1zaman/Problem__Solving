
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

int main(){
        _ios;

        ll n, m; cin >> n >> m;
        vll a(m);
        ll tot = 0;
        rep(i,m){
            cin >> a[i];
            tot+=a[i];
        }
        if(tot<n){
            cout<<-1<<endl;
            return 0;
        }
        vll chek = a;
        ll dorkar = tot - n;
        rep(i,m){
            ll ache =   min(dorkar,a[i]-1);
            dorkar-=ache,a[i]-=ache;
        }
        ll indx = 1;
        vll ans;
        rep(i,m){
            if(indx>n-chek[i]+1){
                cout<<-1<<endl;
                return 0;
            }
            ans.pb(indx), indx+=a[i];
        }
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<endl;

return 0;
}





