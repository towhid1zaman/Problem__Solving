
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
const int  maxn = 2000010;

vi ones(maxn,0);
vi zeros(maxn,0);
int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            int n,k; cin >> n >> k;
            vi a(n,0);
            rep(i,n)cin >> a[i];
            for(int i=0; i<2*k+4; i++){
                ones[i] = zeros[i] = 0;
            }
            for(int i = 0; i<n/2; i++){
                int x = a[i];
                int y = a[n-1-i];
                if(x>y)swap(x,y);

                zeros[x+y]++;
                ones[x+1]++;
                ones[k+y+1]--;
            }

            for(int i = 1; i<2*k+4;i++){
                ones[i]+=ones[i-1];
            }
            int res = INT_MAX;

            for(int sum = 1; sum<2*k+4; sum++){
                int cost = ones[sum] - zeros[sum] + max(0, 2*(n/2 - ones[sum]));
                res = min(res,cost);
            }

            cout<< min(res,n) <<endl;
        }


return 0;
}

