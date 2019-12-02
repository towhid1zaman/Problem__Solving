#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[ ] = {0,0,1,-1};
int dy4[ ] = {1,-1,0,0};
int dx8[ ] = {0,0,1,1,1,-1,-1,-1};
int dy8[ ] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200100;

int main(){

    IOS;
    int x,y;
    cin>>x>>y;
    int k,m;
    cin>>k>>m;
    vi A(x),B(y);
    for(int i = 0; i<x;i++){
        cin>>A[i];
    }
    for(int i = 0; i<y;i++){
        cin>>B[i];
    }
    sort(all(A)),sort(all(B));
    vi cA;
    vi cB;
    for(int i = 0; i<k;i++){
        cA.pb(A[i]);
    }
    reverse(all(B));
    for(int i = 0; i<m;i++){
        cB.pb(B[i]);
    }
    
    if(maxv(cA)<minv(cB)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;



return 0;
}




