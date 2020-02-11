#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
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
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000010;
const ll N = 1e9;


int main(){
        _ios;
        int n,m,d;cin>>n>>m>>d;
        n*=m;
        vi a(n+1);
        //first of all, this matrix is useless.
        rep1(i,1,n){
            cin>>a[i];
        }
        sort(all(a));
        int median = a[n/2+1];
        int res = 0;
        rep1(i,1,n){
            if(abs(a[i]-median)%d){
                cout<<-1<<endl;
                return 0;
            }
            res+=abs(a[i]-median)/d;
        }
        cout<<res<<endl;
return 0;
}






