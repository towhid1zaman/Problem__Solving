#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define pb push_back
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"

const int mod = 1000000007; // (int)1e9+7
const int N = 20000;

void solve()
{
    int n;
    cin>>n;
    vi v(n+1);
    map< int,vector<int> >chek;
    for(int i = 1; i<=n;i++){
        cin>>v[i];
        chek[v[i]].push_back(i);
    }
    int ans =n+1;
    for(auto x: chek){
        for(int i = 1; i<x.second.size();i++){
            ans = min(ans,abs(x.second[i]-x.second[i-1])+1);
        }
    }
    if(ans==n+1){
        cout<<-1<<endl;
    }
    else cout<<ans<<endl;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        solve();
    }


return 0;
}



