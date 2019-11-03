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
const int N = 2e9;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    set<ll>ans;
    int n;
    cin>>n;
    vll v(n);
    for(int i = 0; i<n;i++){
        cin>>v[i];
        ans.insert(v[i]);
    }
    sort(all(v));

    /// for 3
    for(int i = 0; i<n;i++){
        for(ll j = 1; j<=N;j*=2){
            if(v[i]-j<v[0]){
                break;
            }
            if(v[i]+j>v[n-1]){
                break;
            }
            if(ans.count(v[i]-j) and ans.count(v[i]+j)){
                cout<<3<<endl;
                cout<<v[i]<<" "<<v[i]+j<<" "<<v[i]-j<<endl;
                return 0;
            }
        }
    }
    ///for 2
    for(int i=0;i<n;i++){
        for(ll j = 1; j<=N;j*=2){
            if(v[i]-j<v[0]){
                break;
            }
            if(ans.count(v[i]-j)){
                cout<<2<<endl;
                cout<<v[i]<<" "<<v[i]-j<<endl;
                return 0;
            }
        }
    }

    ///for 1
    cout<<1<<endl;
    cout<<v[0]<<endl;



return 0;
}




