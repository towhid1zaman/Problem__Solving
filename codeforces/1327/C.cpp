
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

int main(){
        _ios;


        int n,m,k; cin >> n >> m >> k;
        k*=2;
        rep(i,k){
            int x,y; cin >> x >> y;
        }
        int moves = n+m+n*m-3;
        cout<<moves<<endl;

        for(int i = 0; i<n-1; i++){
            cout<<'U';
        }
        for(int i = 0; i<m-1; i++){
            cout<<'L';
        }
        for(int k = 0; k<n; k++){
              if(k%2==0){
                    string s="";
                    for(int i = 0; i<m-1; i++){
                        s+='R';
                    }
              if(k<n-1)s+='D';
              cout<<s;
            }
               else{
                    string s = "";
                    for(int i = m-1; i>=1;i--){
                        s+='L';
                    }
                    if(k<n-1)s+='D';
                    cout<<s;
               }
        }
        cout<<endl;

return 0;
}

