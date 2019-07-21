#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;

int main(){
        IO
        ll n;
        cin>>n;
        ll res=0,sum=0;
        ll v[n+1];
        vector<ll>ans;
        for(ll i = 1; i<=n;i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        for(ll i = 1; i<=n;i++)
        {
            if(i==1 or v[i]*2 <= v[1]){
                res+=v[i];
                ans.pb(i);
            }
        }
        if(res*2 > sum){
            cout<<ans.size()<<endl;
            for(auto &x:ans){
                cout<<x<<" ";
            }
            cout<<endl;
        }
        else{
            cout<<0<<endl;
        }


return 0;
}






