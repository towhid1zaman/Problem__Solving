#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
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

ll a[N];
ll b[N];
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    ll n;
    cin>>n;
    for(int i = 1; i<=n;i++){
        cin>>a[i];
        b[i] = a[i];
        a[i]+=a[i-1];
    }
//    for(int i = 1; i<=n;i++){
//            //cout<<"OK"<<endl;
//        cout<<b[i]<<" ";
//    }
//    cout<<endl;
    sort(b,b+n+1);
    for(int i = 2; i<=n;i++){
        b[i]+=b[i-1];
    }
//    for(int i= 1; i<=n;i++){
//        cout<<b[i]<<" ";
//    }
//  cout<<endl;
    ll q;
    cin>>q;
    while(q--){
        ll type,l,r;
        cin>>type>>l>>r;
        if(type==1){
                cout<<a[r]-a[l-1]<<endl;
        }
        else if(type==2){
            cout<<b[r]-b[l-1]<<endl;
        }
    }


return 0;
}



