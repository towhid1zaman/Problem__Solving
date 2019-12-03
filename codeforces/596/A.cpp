#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
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
    int n,res;
    cin>>n;
    vector< pair<int,int> >v(n);
    rep(i,0,n-1)
    {
        int x,y;
        cin>>x>>y;
        v[i].first = x;
        v[i].second = y;
        //cin>>v[i].first>>v[i].second;
    }
    bool f = false;
    rep(i,0,n-1)
    {
        rep(j,i+1,n-1){
            //if(i==j)continue;
            if(v[i].first != v[j].first and v[i].second!=v[j].second){
             res = abs(v[i].first-v[j].first)*abs(v[i].second-v[j].second);
                f = true;
                break;
            }
        }
        if(f)break;
    }
    if(!f){
      cout<<-1<<endl;  
    }
    else 
     cout<<res<<endl;



return 0;
}




