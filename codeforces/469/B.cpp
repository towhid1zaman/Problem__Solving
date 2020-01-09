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

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
int a[maxn],b[maxn],c[maxn],d[maxn];
bool chek(int a,int b,int c,int d){
    return max(a,c) <= min(b,d);
}
int main(){
        _ios;

        int p,q,l,r;
        cin>>p>>q>>l>>r;
        rep(i,0,p-1){
            cin>>a[i]>>b[i];
        }
        rep(i,0,q-1){
            cin>>c[i]>>d[i];
        }
        int ans = 0;
        rep(i,l,r){
            bool f = false;
            rep(j,0,p-1){
                rep(k,0,q-1){
                    if(chek(a[j],b[j],c[k]+i,d[k]+i))f = true;
                }
            }
            if(f)ans += f;
        }
        cout<<ans<<endl;




return 0;
}





