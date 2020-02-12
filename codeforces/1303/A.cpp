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
const int maxn = 2000010;
const ll N = 1e18;

int main(){
        _ios;

        int T;cin>>T;
        while(T--){
            string s;cin>>s;
            int cnt = 0;
            int f = 0;
            int r = 0;
            for(int i = 0;i<sz(s);i++){
                if(s[i]=='1'){
                    f = i;
                    break;
                }
            }
            for(int i = sz(s)-1;i>=0;i--){
                if(s[i]=='1'){
                    r = i;
                    break;
                }
            }
            int z = count(all(s),'0');
            if(z==sz(s)){
                cout<<0<<endl;
                continue;
            }
            for(int i = f; i<=r;i++){
                if(s[i]=='0')cnt++;
            }
            cout<<cnt<<endl;
        }

return 0;
}






