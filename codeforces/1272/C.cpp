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
int n,k;
bool chek(string s, string t){
    int cnt = 0;
    for(int i = 0; i<s.size(); i++)
    {
        bool f = false;
        for(int j = 0; j<t.size();j++)
        {
            if(s[i]==t[j]){
                f = true;
            }
        }
        if(f)cnt++;
    }
    if(cnt==k){
        return true;
    }
    else return false;
}
int main(){

    IOS;
    cin>>n>>k;
    string s;
    cin>>s;
    string t="";
    for(int i = 0; i<k;i++){
        char x;
        cin>>x;
        t+=x;
    }
    ll chek = 0,res=0,ho=0,ans=0;
   for(ll i=0;i<s.length();i++)
	{
		chek =0;
		for(ll  j=0;j<t.length();j++)
		{
			if(s[i]==t[j]){
				res++;
			 	ho = res*(res+1)/2;
			}
			else{
				chek++;
				if(chek==t.length()){
					ans+=ho;
					res=0;
					ho=0;
				}
			}
		}
	}
	ans+=ho;
	cout<<ans<<endl;

return 0;
}




