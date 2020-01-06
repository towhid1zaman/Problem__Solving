#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back

int dx4[] = {0,0,1,-1};
int dy4[] = {1,-1,0,0};
int dx8[] = {0,0,1,1,1,-1,-1,-1};
int dy8[] = {1,-1,1,-1,0,0,-1,1};

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 200;
int given[maxn][maxn];
int ans[maxn][maxn];
int res[maxn][maxn];
int m,n;
int resOR(int i,int j){
    int OR = 0;
    for(int k = 1; k<=n;k++){
        OR |=ans[i][k];
    }
    for(int k = 1; k<=n;k++){
        OR|=ans[k][j];
    }
    return OR;
}
int main(){
        _ios;


        cin>>m>>n;
        vi zi,zj;
        rep(i,1,m){
            rep(j,1,n){
                cin>>given[i][j];
                if(!given[i][j]){
                    zi.pb(i);
                    zj.pb(j);
                }
            }
        }
        rep(i,1,m){
            rep(j,1,n){
                ans[i][j] = 1;
            }
        }
        for(int i = 0; i<zi.size();i++){
            for(int j = 1; j<=n;j++){
                ans[zi[i]][j] = 0;
            }
        }
        for(int i = 0; i<zj.size();i++){
            for(int j = 1; j<=m;j++){
                ans[j][zj[i]] = 0;
            }
        }

        rep(i,1,m){
            rep(j,1,n){
                res[i][j] = resOR(i,j);
            }
        }
        bool f = true;
        rep(i,1,m){
            rep(j,1,n){
                if(res[i][j] != given[i][j]){
                    f = false;
                    break;
                }
            }
            if(!f)break;
        }
        if(!f){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            rep(i,1,m){
                rep(j,1,n){
                    cout<<ans[i][j]<<" ";
                }
                cout<<endl;
            }
            cout<<endl;
        }



return 0;
}





