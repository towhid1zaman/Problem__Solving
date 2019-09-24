#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <ll, ll> pll;
typedef vector<pll>vip;
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
    ll n,q;
    cin>>n>>q;
    vll v(n);
    vll point(n+2,0);

    for(int i = 0; i<n;i++){
        cin>>v[i];
    }
    ll l,r;
       for(int i = 0; i<q;i++){
            cin>>l>>r;
            point[l]+=1;
            point[r+1]-=1;
    }
    ///prefix
    for(int i = 1; i<n+2;i++){
        point[i] += point[i-1];
    }
//    for(auto x: point){
//        cout<<x<<" ";
//    }cout<<endl;
    ll ans = 0;
    sort(all(v)),sort(all(point));
    for(int i= n-1; i>=0;i--){
        ans+=point[i+2]*v[i];
    }
    cout<<ans<<endl;





return 0;
}

