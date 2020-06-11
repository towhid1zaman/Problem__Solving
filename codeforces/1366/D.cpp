
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 2000100;

int p[10000005];

void sieve(){
    for(ll i=2;i<=10000000;i++){
        if(p[i]==0)
        for(ll j=i*i;j<=10000000;j+=i){
            if(p[j]==0)
            p[j]=i;
        }
    }
}

int main(){
        _
        sieve();
        int n; cin >> n;
        pii ans[n+2];
        for(int i = 0; i<n; i++){
            int a; cin >> a;
            if(p[a]==0){
                ans[i].first = -1;
                ans[i].second = -1;
            }
            else{
                int temp = 1;
                int val = p[a];
                while(a%val==0){
                    temp*=val;
                    a/=val;
                }
                if(a==1){
                    ans[i].first = -1, ans[i].second = -1;
                }
                else ans[i].first = temp, ans[i].second = a;
            }
        }
        rep(i,n)cout<<ans[i].first<<' '; cout<<endl;
        rep(i,n)cout<<ans[i].second<<' '; cout<<endl;

return 0;
}


