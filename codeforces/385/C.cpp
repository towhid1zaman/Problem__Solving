
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

const int maxn = 10000000;
int pref[maxn];
int mp[maxn];
bool isPrime[maxn];

void sieve(){
    for(int i = 2; i<=maxn; i++){
        if(isPrime[i]==0){
            pref[i] = mp[i];
            for(int j = i+i; j<=maxn; j+=i){
                isPrime[j] = 1;
                pref[i] += mp[j];
            }
        }
    }
}
int main(){
            _ios;
            int n,m,x; cin >> n;
            vector<int>v(n);
            for(int i = 0; i<n; i++){
                cin >> x;
                mp[x]++;
            }
            sieve();
            for(int i = 2; i<=maxn; i++){
                pref[i]+=pref[i-1];
            }
            cin >> m;
            while(m--){
            int l,r; cin >> l >> r;
            l = min(l,maxn), r = min(r,maxn);
            cout<<pref[r] - pref[l-1]<<endl;
            }


return 0;
}
