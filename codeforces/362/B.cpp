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
ll n,m;
ll odd[maxn];
ll res[maxn];
int main(){
        _ios;

        cin>>n>>m;

        rep(z,1,m){
            cin>>odd[z];
        }
        sort(odd+1,odd+m+1);
        if(odd[m]==n or odd[m]==1 or odd[1]==1){
            cout<<"NO"<<endl;
            return 0;
        }
        for(int i = 1; i<=m;i++){
            if(odd[i+2]-odd[i+1]==1 and odd[i+1]-odd[i]==1){
                cout<<"NO"<<endl;
                return 0 ;
            }
        }
        cout<<"YES"<<endl;




return 0;
}





