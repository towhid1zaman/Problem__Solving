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
ll n,k;
void res(){
    cin >> n >> k;
    vll a(n);
    map<ll,ll>mp;
    rep(i,n)cin >> a[i];
    bool f = true;
    int d = 1;
    rep(i,n){
          ll tot = 0,chek = a[i];
          while(chek > 0){
           while(chek %k == 0){
            chek = chek/k;
            tot++;
           }
        if((chek - 1)%k != 0){
             cout<<"NO"<<endl;
             return;
            }
        if(mp.find(tot) != mp.end()){
             cout<<"NO"<<endl;
             return;
        }
            mp[tot]++;
            chek--;
          }
    }
    for(auto x:mp){
          if(x.ss > d){
           cout<<"NO"<<endl;
           return;
        }
    }
    if(f = true){
        cout<<"YES"<<endl;
    }
}
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            res();
        }



return 0;
}




