#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200100;
void solve()
{
    ll a,b;
    cin>>a>>b;
    if(a>=b){
        cout<<"Yes"<<endl;
        return;
    }
    if(a==1){
     cout<<"No"<<endl;
        return;
    }
    if(a==3){
        cout<<"No"<<endl;
        return;
    }
    if(a==2 and b>=4){
        cout<<"No"<<endl;
        return;
    }
    else cout<<"Yes"<<endl;
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




