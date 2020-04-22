
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

ll cal(ll x, ll y, ll z){
	return (x - y) * (x - y) + (x - z) * (x - z) + (y - z) * (y - z);
}

int main(){
        _ios;

        int T; cin >> T;
        while(T--){

            ll n1,n2,n3; cin >> n1 >> n2 >> n3;
            vll a(n1),b(n2),c(n3);

            rep(i,n1)cin >> a[i];
            rep(i,n2)cin >> b[i];
            rep(i,n3)cin >> c[i];

            sort(all(a)),sort(all(b)),sort(all(c));

            ll ans = 4*1e18;
            //case 1 xyz
            for(int x = 0; x<n1; x++){
                ll y,z;

                z = lower_bound(all(c),a[x]) - c.begin();
                if(z==n3) z--;
                y = upper_bound(all(b),a[x]) - b.begin();
                if(y>0) y--;
                if(y==n2)y--;
                ans = min(ans,cal(a[x],b[y],c[z]));


                y = lower_bound(all(b),a[x]) - b.begin();
                if(y==n2)y--;
                z = upper_bound(all(c),a[x]) - c.begin();
                if(z>0)z--;
                if(z==n3)z--;
                ans = min(ans,cal(a[x],b[y],c[z]));
            }


            //case 2 yxz
            for(int y = 0; y<n2; y++){
                ll x,z;

                z = lower_bound(all(c),b[y]) - c.begin();
                if(z==n3)z--;
                x = upper_bound(all(a),b[y]) - a.begin();
                if(x>0)x--;
                if(x==n1)x--;
                ans = min(ans,cal(a[x],b[y],c[z]));


                x = lower_bound(all(a),b[y]) - a.begin();
                if(x==n1)x--;
                z = upper_bound(all(c),b[y]) - c.begin();
                if(z>0)z--;
                if(z==n3)z--;
                ans = min(ans,cal(a[x],b[y],c[z]));
            }



            //case 3 zxy
            for(int z = 0; z<n3; z++){
                ll x,y;

                x = lower_bound(all(a),c[z]) - a.begin();
                if(x==n1)x--;
                y = upper_bound(all(b),c[z]) - b.begin();
                if(y>0)y--;
                if(y==n2)y--;
                ans = min(ans,cal(a[x],b[y],c[z]));

                y = lower_bound(all(b),c[z]) - b.begin();
                if(y==n2)y--;
                x = upper_bound(all(a),c[z]) - a.begin();
                if(x>0)x--;
                if(x==n1)x--;
                ans = min(ans,cal(a[x],b[y],c[z]));
            }

            cout<<ans<<endl;

        }


return 0;
}

