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

bool chek(int x,int y,int a2,int b2,int a3,int b3)
{
    if(a2+a3<=x and b2<=y and b3<=y)return true;
    if(a2+b3<=x and b2<=y and a3<=y)return true;
    if(b2+a3<=x and a2<=y and b3<=y)return true;
    if(b2+b3<=x and a2<=y and a3<=y)return true;
    return false;
}
int main(){

    IOS;
    int x,y,a2,b2,a3,b3;
    cin>>x>>y>>a2>>b2>>a3>>b3;
    if(chek(x,y,a2,b2,a3,b3) or chek(y,x,a2,b2,a3,b3))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;



return 0;
}




