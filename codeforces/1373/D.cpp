
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
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



int main(){
        _
        int T; cin >> T;
        while(T--){
            int n; cin  >> n;
            vi a(n);
            ll sum = 0;
            for(int i = 0; i<n; i++){
                cin >> a[i];
                if(i%2==0)sum+=a[i];
            }
            ll mx_sum = 0;
            ll cur_sum = 0;
            for(int i = 0; i<n-n%2; i+=2){
                cur_sum = max(0ll, cur_sum+a[i+1]-a[i]);
                mx_sum = max(mx_sum, cur_sum);
            }
            cur_sum = 0;
            for(int i = 1; i<n-(n%2==0); i+=2){
                cur_sum = max(0ll, cur_sum+a[i]-a[i+1]);
                mx_sum = max(mx_sum, cur_sum);
            }
            cout << mx_sum + sum <<endl;
        }




return 0;
}

