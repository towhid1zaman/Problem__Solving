#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200010;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    ll q;
    cin>>q;
    ll n,r;
    while(q--){
        cin>>n>>r;
        vi v(n);
        rep(i,0,n-1){
            cin>>v[i];
        }
        sort(all(v));
        int res=0;
        int p=0;
        for(int i = n-1; i>=0;i--){
            if(v[i]-p<=0){
                break;
            }
            else{
               p=p+r;
               int t=v[i];
               while(t==v[i])
                    i--;
                    i++;
               res++;
            }
        }
        cout<<res<<endl;
    }

return 0;
}



