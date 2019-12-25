#include "bits/stdc++.h"
using namespace std;
typedef long long ll;typedef unsigned long long ull;
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

int dx4[ ] = {0,0,1,-1};
int dy4[ ] = {1,-1,0,0};
int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){

        _ios;
        int T;
        cin>>T;
        while(T--){
          int n,p,k;
          cin>>n>>p>>k;
          int v[n+1];
          for(int i = 1; i<=n;i++){
            cin>>v[i];
          }
          sort(v+1,v+n+1);
          int evenSum=0,oddSum=0,maxProduct=0;
          for(int i = 1; i<=n;i++){
            int x = v[i];
            if(i%2==0){
              evenSum+=x;
              if(evenSum<=p){
                maxProduct = max(maxProduct,i);
              }
            }
            else{
              oddSum+=x;
              if(oddSum<=p){
                maxProduct = max(maxProduct,i);
              }
            }
          }
          cout<<maxProduct<<endl;
        }
        
        



return 0;
}




