
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000110;
ll gcd(ll a, ll b){
    return b==0 ? a : gcd(b,a%b);
}
ll lcm(ll a,ll b){
    return (a / gcd(a, b)) * b;
}

vll T(2*maxn);
vll D;
void build(ll v,ll left, ll right){
 	if(left==right){
		T[v] = D[left];
	}
	else{
		int mid = (left+right)/2;
		build(v*2,left,mid);
		build(v*2+1,mid+1,right);
		T[v]=T[v*2]+T[v*2+1];
	}
}

ll res(ll v,ll left, ll right, ll l ,ll r){
	if(l>r) return 0;
	if(left==l and right==r)return T[v];
	ll mid = (left+right)/2;
	ll x = res(v*2,left,mid,l,min(r,mid));
	ll y = res(v*2+1,mid+1,right,max(l,mid+1),r);
	return x+y;
}

void Query(){
    ll a,b,q;cin>>a>>b>>q;
	ll m = lcm(a,b);
	D.assign(m,0);
	rep(i,m){
		ll x = (i%a)%b;
		ll y = (i%b)%a;
		if(x!=y)D[i]=1;
	}
	build(1,0,m-1);
	while(q--)
	{
		ll l,r;
		cin>>l>>r;
		ll pos1 = l%m;
		ll pos2 = r%m;
		ll x = res(1,0,m-1,pos1,m-1);
		ll y = res(1,0,m-1,0,pos2);
		ll ans = x+y;
		ll d1 = m - pos1;
		ll d2 = pos2+1;
		ll dif = r - l - d2 - d1+1;
		ans+= (dif/m)*res(1,0,m-1,0,m-1);
		cout<<ans<<" ";
	}
	cout<<endl;
}
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            Query();
        }

return 0;
}

