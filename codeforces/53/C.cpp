
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
void pp(int N, int K) {
    vector<int> res; 
 
    int l = 1, r = N, flag = 0; 

    for (int i = 0; i < K; i++) { 
        if (!flag) { 
            res.push_back(l); 
            l++; 
        } 
        else { 
            res.push_back(r); 
            r--; 
        } 
        flag ^= 1; 
    } 
    if (!flag) { 
        for (int i = r; i >= l; i--) 
            res.push_back(i); 
    }
    else { 
        for (int i = l; i <= r; i++) 
            res.push_back(i); 
    }
    for (auto i : res) 
        cout << i << " "; 
} 
void task(){
 	int n; cin >> n;
 	pp(n,n-1);
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


