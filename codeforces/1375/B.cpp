
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
typedef vector<pii>vip;
typedef pair< pii, int > ppi;
#define fill(a,b) memset(a,b,sizeof(a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0;i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int inf = 0x3f3f3f3f;// (int)3e18;
const int maxn = 200005;
 
void task(){

    int n,m; cin >> n >> m;
    vector<vector<int>>a(n,vector<int>(m));
    for(int i = 0; i<n; i++){
        for(int j = 0; j<m; j++){
            cin >> a[i][j];
        }
    }
    rep(i,n){
        rep(j,m){
            if(a[i][j]>4){
                cout<<"NO"<<endl;
                return;
            }
            if(a[i][j]>2 and ( (!i and !j) or (i==n-1 and !j) or (j==m-1 and !i) or(i==n-1 and j==m-1) ) ){
                cout << "NO" << endl;
                return;
            }
            if(a[i][j]>3 and ( !i or !j or i==n-1 or j==m-1 )){
                cout << "NO" << endl;
                return;
            }
            if( (!i and !j) or (i==n-1 and !j) or (j==m-1 and !i) or(i==n-1 and j==m-1) ){
                a[i][j]=2;
            }
            else if( !i or !j or i==n-1 or j==m-1 ){
                a[i][j]=3;
            }
            else{
                a[i][j]=4;
            }
        }
    }

    cout << "YES" << endl;
    rep(i,n){
        rep(j,m){
         cout << a[i][j]<<' ';
        }cout << endl;
    }
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1;cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


