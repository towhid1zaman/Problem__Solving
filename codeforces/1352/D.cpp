
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
            int n; cin >> n;
            vi a(n);
            rep(i,n){
                cin >> a[i];
            }

            int l = 1, r = n-1;
            int A = a[0], B = 0;
            int AA = a[0], BB = 0;
            int round  = 1;
            int sum = 1;

            while(l<=r){
                    if(round==1){
                        int tot = 0;
                        while(r>=l and tot<=A){
                            tot+=a[r];
                            r--;
                        }
                        B = tot;
                        BB+=tot;
                    }
                    else{
                        int tot = 0;
                        while(l<=r and tot<=B){
                            tot+=a[l];
                            l++;
                        }
                        A = tot;
                        AA+=tot;
                    }

                    sum++, round^=1;
            }

            cout<<sum<<' '<<AA<<' '<<BB<<endl;
        }


return 0;
}

