
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
const int maxn = 2000050;

ll tree[maxn];
ll a[maxn];
ll A,B,n,m,initial;

void build(ll low, ll high, ll pos, ll op){
    if(low==high){
        tree[pos] = a[low];
        return;
    }
    ll mid = (low+high)/2;
    build(low, mid, 2*pos+1, op-1);
    build(mid+1, high, 2*pos+2, op-1);
    if(op%2==1)tree[pos] = tree[2*pos+1]|tree[2*pos+2];
    else tree[pos] = tree[2*pos+1]^tree[2*pos+2];
}
void update(ll low, ll high, ll pos, ll op, ll indx, ll value){
    if(low>high or indx>high or indx<low) return;
    if(low==high and low==indx){
        tree[pos] = value;
        return;
    }
    ll mid = (low+high)/2;
    update(low, mid, 2*pos+1, op-1,indx,value);
    update(mid+1, high, 2*pos+2, op-1,indx,value);
    if(op%2==1)tree[pos] = tree[2*pos+1]|tree[2*pos+2];
    else tree[pos] = tree[2*pos+1]^tree[2*pos+2];
}

void task(){
    
    cin >> initial >> m;
    n = pow(2,initial);
    for(int i = 0; i<n; i++){
        cin >> a[i];
    }
    build(0,n-1,0,initial);
    while(m--){
        cin >> A >> B;
        A--;
        update(0,n-1,0,initial,A,B);
        cout << tree[0] << endl;
    }
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


