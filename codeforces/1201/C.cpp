//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;

vector<ll>v;
int main(){
	IO
	ll n,k;
	cin>>n>>k;

	rep(i,n){
	    ll x;
	    cin>>x;
        v.pb(x);
	}
	sort(all(v));
	ll sum= 0;
	rep2(i,n/2,n)
	{
	    sum+=v[i];
	}
	ll ind;
	for(ll i = n-1; i>=n/2;i--)
    {
        ll res = (v[i]*(i-n/2+1)-sum);
        if(k>=res)
        {
            k-=res;
            ind = i;
            break;
        }
        sum-=v[i];
    }
    ll j = k/(ind-n/2+1);
    cout<<v[ind]+j<<endl;




return 0;
}


