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
#define ff first
#define ss second
#define pb push_back
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

ll phi(ll n) {
    ll result = n;
    for (ll p = 2; p * p <= n; p++)
        if (n % p == 0) {
            result = result / p * (p - 1);

            do {
                n /= p;
            } while (n % p == 0);
        }

    if (n > 1)
        result = result / n * (n - 1);

    return result;
}
ll gcd(ll a ,ll b){
    return b?gcd(b,a%b):a;
}
int main(){
        _ios;

        int T;
        cin>>T;
        //cout<<phi(T)<<endl;
        while(T--){
            ll a,m;
            cin>>a>>m;
            ll g = gcd(a,m);
            m/=g;
            cout<<phi(m)<<endl;
        }




return 0;
}





