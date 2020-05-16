
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
const int inf = 0x3f3f3f3f;
const int maxn = 200010;



int main(){
        _
        sp(7);
        int nums[maxn],adds[maxn],a,x,n;
        nums[0] = adds[0]=0;
        ll sz = 1, sum = 0;
        cin >> n;
        for(int i = 0; i<n; i++){
            int type; cin >> type;
            if(type==1){
                cin >> a >> x;
                sum+=a*x;
                adds[a-1]+=x;
            }
            else if(type==2){
                cin >> x;
                sum+=x;
                nums[sz]=x;
                adds[sz]=0;
                sz++;
            }
            else{
                sum-=nums[sz-1] + adds[sz-1];
                adds[sz-2]+=adds[sz-1];
                sz--;
            }
            long double num = sum, tot = sz;
            cout<<(sum/tot)<<endl;
        }


return 0;
}

