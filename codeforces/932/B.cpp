
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) sort(all(v)),(v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int f(int n){
    if(n == 0)return 0;
    int res = 1;
    while(n){
        while(n%10==0){
            n/=10;
        }
        res*=(n%10);
        n/=10;
    }
    return res;
}

int g(int n){
    if(n<10)return n;
    else return g(f(n));
}

int pre[maxn][10];

int main(){
        _ios;

        for(int i = 1; i<=maxn; i++){
            int x = g(i);
            for(int j = 1; j<=9; j++){
                if(x==j)pre[i][j] = pre[i-1][j]+1;
                else pre[i][j] = pre[i-1][j];
            }
        }
        int Q; cin >> Q;
        while(Q--){
            int l,r,k; cin >> l >> r >> k;
            cout<< pre[r][k] - pre[l-1][k]<<endl;
        }


return 0;
}
