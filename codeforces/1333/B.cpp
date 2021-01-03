
// </> : towhid1zaman

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
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back
#define inf (1<<29)

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            int n; cin >> n;
            vi a(n),b(n);
            rep(i,n)cin >> a[i];
            rep(i,n)cin >> b[i];
            int pos = 0,neg=0;
            int ans = 1;
            rep(i,n){
                if(!pos and !neg){
                    if(a[i]!=b[i]){
                        ans =   0;
                        break;
                    }
                }
                if(!pos and a[i]<b[i]){
                    ans = 0;
                    break;
                }
                if(!neg and a[i]>b[i]){
                    ans = 0;
                    break;
                }
                if(b[i]>=1) pos = 1;
                if(b[i]<=-1) neg = 1;
                if(a[i]==-1) neg = 1;
                if(a[i]==1) pos = 1;

            }
            if(ans)cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }


return 0;
}

