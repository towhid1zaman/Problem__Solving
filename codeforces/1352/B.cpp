
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _
        int T; cin >> T;
        while(T--){
            int n, k; cin >> n >> k;
            if(n<k){
                cout<<"NO"<<endl;
            }
            else{

                    int p = n-k+1;
                    int q = n-2*(k-1);
                    if(p>0 and p%2==1){
                        cout<<"YES"<<endl;
                        cout<<p<<' ';
                        rep(i,k-1)cout<<1<<' '; cout<<endl;
                    }
                    else if(q>0 and q%2==0){
                        cout<<"YES"<<endl;
                        cout<<q<<' ';
                        rep(i,k-1)cout<<2<<' ';cout<<endl;
                    }
                    else cout<<"NO"<<endl;

            }
        }


return 0;
}

