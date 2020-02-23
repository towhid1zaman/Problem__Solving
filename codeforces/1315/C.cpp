#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define eachek(it,s) for(auto it = s.begin(); it != s.end(); ++it)
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
const int maxn = 20000;
int main(){
        _ios;
        int T;cin>>T;
        while(T--){
        bool chek=true;
		set<int>s;
		int n;
		int a[maxn];
		int b[maxn];
		cin>>n;
		for(int i=1;i<=2*n;i++){
                s.insert(i);
		}
		for(int i=1;i<=n;i++){
			cin>>a[i];
			s.erase(a[i]);
		}
		for(int i=1;i<=n;i++)
		{
			auto it=s.upper_bound(a[i]);
			if(it==s.end())
			{
				chek=false;
				break;
			}
			else
			{
				int vl=(*it);
				b[a[i]]=vl;
				s.erase(it);
			}
		}
		if(chek==true)
		{
			for(int i=1;i<=n;i++)
			  cout<<a[i]<<" "<<b[a[i]]<<" ";

		    cout<<endl;
		}
		else
		cout<<"-1"<<endl;
        }




return 0;
}





