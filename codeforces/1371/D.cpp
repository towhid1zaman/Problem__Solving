
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
const int maxn = 2000100;


void task(){
    int n,k; cin >> n >> k;
    if((n*n)==k){
        string s(n,'1');
        cout << '0' << endl;
        rep(i,n){
            cout<<s<<endl;
        }
        return;
    }
    if(k%n==0)cout<<'0'<<endl;
    else cout<<'2'<<endl;
    vector<vector<int>>grid(n,vector<int>(n));
    for(int i = 0; i<n and k; i++){
        for(int j = 0; j<n and k; j++){
            grid[j][(i+j)%n] = 1;
            k--;
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout << grid[i][j];
        }
        cout << endl;
    }
    cout << endl;

}

int main(){
        _
        int T = 1; cin >> T;
        while(T--){
            task();
        }
return 0;
}
