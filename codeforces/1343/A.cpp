
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
const int maxn = 2000100;
int bxp(int x,int n){
    	int res = 1;
        	while(n>0){
           	  if(n%2==1){
              	   res = (res*x);
            	}
                   x= (x*x);
                n/=2;
             }
         return res ;
        }
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            int  n; cin >> n;
            int x=0;
            int k=0;
            rep1(i,2,32){
            int g=bxp(2,i);
            g--;
            if(n%g==0){
                    k=i;
                    x=n/g;
                    break;
                }
            }
            cout<<x<<endl;
        }

return 0;
}

