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
const int maxn = 2000100;

ll A[maxn],cnt[maxn];
ll dp[maxn];
int main(){
        _ios;

        int n;
        cin>>n;
        for(int i = 0; i<n;i++){
            cin>>A[i];
        }
        for(int i = 0; i<n;i++){
            cnt[A[i]]++;
        }
        fill(dp);
        dp[0] = 0;
        dp[1 ]= cnt[1];
        for(int i = 2;i<maxn;i++){
            dp[i] = max(i*cnt[i]+dp[i-2],dp[i-1]);
        }
        cout<<dp[maxn-1]<<endl;




return 0;
}





