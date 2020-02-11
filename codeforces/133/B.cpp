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
const int mod = 1e6+3;
const int maxn = 2000010;
const ll N = 1e18;

int main(){
        _ios;
        string s;cin>>s;
        string ans="";
        for(int i = 0; i<sz(s);i++){
            if(s[i]=='>')ans+="1000";
            if(s[i]=='<')ans+="1001";
            if(s[i]=='+')ans+="1010";
            if(s[i]=='-')ans+="1011";
            if(s[i]=='.')ans+="1100";
            if(s[i]==',')ans+="1101";
            if(s[i]=='[')ans+="1110";
            if(s[i]==']')ans+="1111";
        }
        //idea: ((s[n-1]*2^0)%mod+(s[n-2]*2^1)%mod)%mod
        int n = sz(ans);
        // first calculate mod of power 2
        int powTwo[n+1];
        powTwo[0] = 1%mod;
        for(int i = 1; i<n;i++){
            powTwo[i] = powTwo[i-1] * (2%mod);
            powTwo[i]%=mod;
        }
        int res = 0;
        for(int i = 0,j=n-1; i<n;i++,j--){
            if(ans[j]=='1'){
                res+=powTwo[i];
                res%=mod;
            }

        }
        cout<<res<<endl;


return 0;
}






