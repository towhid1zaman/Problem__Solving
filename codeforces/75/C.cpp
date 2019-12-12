    #include "bits/stdc++.h"
    using namespace std;
    typedef long long ll;
    typedef vector<int> vi;
    typedef vector<ll> vll;
    #define all(v) (v).begin(),(v).end()
    #define sp(k) cout<<setprecision(k)<<fixed;
    #define rep(i,a,b) for(int i=(a);i<=(b);++i)
    #define irep(i,b,a) for(int i=(b);i>=(a);--i)
    #define minv(v) *min_element(v.begin(),v.end())
    #define maxv(v) *max_element(v.begin(),v.end())
    #define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
    #define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
    #define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
    #define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    #define endl "\n"
    #define ff first
    #define ss second
    #define pb push_back

    int dx4[ ] = {0,0,1,-1};
    int dy4[ ] = {1,-1,0,0};
    int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
    int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

    const double pi = acos(-1.0);
    const int mod = 1000000007; // (int)1e9+7
    const int maxn = 200100;
    ll gcd(ll a, ll b){return b==0 ? a : gcd(b,a%b);}
    int main(){

    IOS;
    ll a,b;
    cin>>a>>b;
    ll g = gcd(a,b);
    set<ll>divisors;
    set<ll>::iterator it;
    for(int i = 1;i*i<=g;i++){
      if(g%i==0){
        divisors.insert(i);
        divisors.insert(g/i);
      }
    }
    int Q;
    cin>>Q;
    while(Q--){
      int l,r;
      cin>>l>>r;
      int ans = -1;
      for(it = divisors.begin(); it!=divisors.end();it++){
        if(l<=(*it) and (*it)<=r){
          ans = (*it);
        }
      }
      cout<<ans<<endl;
    }
    



    return 0;
    }




