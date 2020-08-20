
// </> : towhid1zaman

#pragma GCC optimize("O3")
#pragma GCC target("sse4")
// #pragma GCC optimize("Ofast")  
// #pragma GCC target("avx,avx2,fma") 
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
const int maxn = 2000;
 /*
    
 */
int a[maxn];
char ans[4100][4100];

void task(){
    fill(ans, ' ');
    int n; cin >> n;
    int Max = maxn, Min = maxn;
    int y = maxn, x = 0;
    for(int i = 0; i<n; i++){
        cin >> a[i];
        if(i){
            if(i&1)y++;
            else y--;
        }
        for(int j = 0; j<a[i]; j++){
            Max = max(Max, y);
            Min = min(Min, y);
            if(i%2==0)ans[y--][x++]='/';
            else ans[y++][x++]='\\';
        }
    }
    for(int i = Min; i<=Max; i++){
        ans[i][x]=0;
        puts(ans[i]);
    }
}

int main(){
        _
        #ifdef OJ
        freopen("inputf.in", "r", stdin);
        freopen("outputf.in", "w", stdout);
        #endif

        int T = 1; //cin >> T;
        while(T--){
            task();
        }
        
return 0;
}


