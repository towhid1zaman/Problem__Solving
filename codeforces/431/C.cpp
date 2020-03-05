#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
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

int dp[100][3];
int n,k,d;

 int kTree(int sum,int chek){
    if(sum>n) return 0;
    if(sum==n){
        if(chek)return 1;
        else return 0;
    }
    if(dp[sum][chek] !=-1) return dp[sum][chek];
    int ans = 0;
    for(int i = 1; i<=k;i++){
        if(i>=d) ans= (ans+kTree(sum+i,1))%mod;
        else ans= (ans+kTree(sum+i,chek))%mod;
    }
    dp[sum][chek] = ans;

    return dp[sum][chek];
 }
int main(){
        _ios;
        memset(dp,-1,sizeof dp);
        cin >> n >> k >> d;
        int ans = kTree(0,0);
        cout << ans <<endl;



return 0;
}

/*
approach : We are going to traverse from root node and take
those paths which contains atleast one edge having value>=d and sum of edges n.
Now , suppose we are node x, then from there we can make k paths
having edge value 1,2,…,k respectively. and for each edge we have
to check whether it’s grater than or equal to d or not. If it is then we already
met the criteria , else we can check further for the condition.
*/
