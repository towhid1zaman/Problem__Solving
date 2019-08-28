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
const int N = 400000;

ll pref[N];
int main(){
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
cout.tie(nullptr);
cerr.tie(nullptr);

ll n,I;
cin>>n>>I;
ll x;
map<ll,int>mp;
for(int i = 1; i<=n;i++)
{
    cin>>x;
    mp[x]++;
}
I = I*8/n;
int cnt = 0;
each(it,mp)
{
    cnt++;
    pref[cnt] = pref[cnt-1]+(*it).S;
}
//for(int i = 1; i<=cnt;i++)cout<<pref[i]<<" ";
//cout<<endl;

int diff;
if(I>=31) diff = N+1;
else diff = (1<<I);
//cout<<diff<<endl;
ll ans = N;
for(ll i = 1; i<=cnt;i++)
{
    if (i+diff-1<=cnt) ans=min(ans,n-(pref[i+diff-1]-pref[i-1]));
		else
			ans=min(ans,pref[i-1]);
}


cout<<ans<<endl;





return 0;
}


