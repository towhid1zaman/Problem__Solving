#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
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

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2001000;

int main(){
        _ios;

        string s;
        cin>>s;
        for(int i = 0; i<s.size();i++){
            if(s[i]==s[i+1] and s[i+1]==s[i+2] and i+2<s.size()){
                s[i]='#';
            }
        }
        //cout<<s<<endl;
        string ans="";
        for(int i = 0; i<s.size();i++){
            if(s[i] !='#'){
                ans.push_back(s[i]);
            }
        }
        for(int i = 2; i<ans.size();i++){
            if(ans[i]==ans[i+1] and ans[i-1]==ans[i-2] and i+1<ans.size()){
                ans[i] = '#';
            }
        }
        //cout<<ans<<endl;
        for(auto x: ans)if(x!='#')cout<<x;



return 0;
}




