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

int main(){
        _ios;

        int n; cin >> n;
        string s; cin >> s;
        int res = 0;
        for(int i = 25; i>0;){
            int chek = 0;
            n = sz(s);
            irep(j,n-1,0){
                if(s[j]-'a'==i){
                    int done = 0;
                    if(j+1<sz(s) and s[j+1]-'a'==i-1){
                        done = 1;
                    }
                    if(j-1>=0 and s[j-1]-'a'==i-1){
                        done = 1;
                    }
                    if(done==1){
                        s.erase(s.begin()+j);
                        res++;
                        chek=1;
                    }
                }
            }
            if(chek==0)i--;
        }
        cout<<res<<endl;




return 0;
}





