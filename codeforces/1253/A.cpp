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
const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;
void solve()
{
    int n;
    cin>>n;
    int a[n+1];
    int b[n+1];
    rep(i,1,n){
        cin>>a[i];
    }
    rep(i,1,n){
        cin>>b[i];
    }
    int f = 0;
    int s = 0;
    for(int i = 1; i<=n;i++){
        if(a[i]!=b[i]){
            f = i;
            break;
        }
    }
    for(int i = n; i>=1;i--){
        if(a[i]!=b[i]){
            s= i;
            break;
        }
    }
    if(f==0){
        cout<<"YES"<<endl;
        return;
    }
    else{
        int chek = b[f] - a[f];
    for(int i = f; i<=s;i++){
        a[i]+=chek;
    }
    bool lol = true;
    for(int i=1; i<=n;i++){
        if(a[i]!=b[i]){
            lol = false;
        }
    }
    if(lol==true and chek>0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);

    int t;
    cin>>t;
    while(t--){
    solve();

    }



return 0;
}

