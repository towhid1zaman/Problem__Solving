
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
const int maxn = 200010;


ll chek[maxn];
ll chek2[maxn];
ll a[maxn];
map<ll,ll>mp;
vll ans;
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            ll n; cin >> n;
            rep1(i,1,n)cin >> a[i];
            mp.clear();
            ll cnt = 0;
            rep1(i,1,n){
                chek[i]=chek2[i]=0;
            }
            ll mx = 0;
            rep1(i,1,n){
                mx =max(mx,a[i]);
                if(mp[a[i]]==1)cnt=1;
                if(cnt==1)continue;
                if(mx==i){
                    chek[i]=1;
                }
                mp[a[i]]=1;
            }
            cnt = mx = 0;
            mp.clear();
            irep(i,n,1){
                mx = max(mx,a[i]);
                //cout<<mx<<endl;
                if(mp[a[i]]==1)cnt=1;
                if(cnt==1)continue;
                if(mx==n-i+1){
                    chek2[i]=1;
                }
                mp[a[i]]=1;
            }
            ans.clear();
            for(int i = 1; i<n; i++){
                if(chek[i]==1 and chek2[i+1]==1){
                    ans.pb(i);
                }
            }
            cout<<ans.size()<<endl;
            for(auto x:ans){
                cout<<x<<" "<<n-x<<endl;
            }
            
            ///fuk the map........
        }


return 0;
}





