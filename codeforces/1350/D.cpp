
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _
        int T; cin >> T;
        while(T--){
            int n,k; cin >> n>>k;
            vi a(n);
            rep(i,n)cin >> a[i];
            if(n==1 and a[0]==k){
                cout<<"yes"<<endl;
                continue;
            }
            bool Equal  = false, Greater = false;
            rep(i,n){
                if(a[i]==k)Equal = true;
                // finding subarray size 2
                if(a[i] >= k){
                    if(i > 0 and a[i - 1] >= k)Greater = true;
                    else if(i > 1 and a[i-2]>=k) Greater = true;
                }
            }
            if(Equal and Greater)cout<<"yes"<<endl;
            else cout<<"no"<<endl;
        }
return 0;
}

