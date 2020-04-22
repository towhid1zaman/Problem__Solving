
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

        int n,a,b; cin >> n >> a >> b;
        int chek = a+n;
        int x=-1,y=-1;
        while(chek>=a){
            chek-=a;
            x++;
            if(chek%b==0){
                y = chek/b;
                break;
            }
        }
        int A = a;
        int B = b;
        if(y<0){
            cout<<-1<<endl;
            return 0;
        }

        // possible way
        vi ans;
        for(int i = 0; i<x; i++){
            for(int j = 0; j<A-1; j++){
                ans.pb(A*i + j+2);
            }
                ans.pb(A*i+1);
        }
        for(int i = 0; i<y; i++){
            for(int j = 0; j<B-1; j++){
                ans.pb(A*x+B*i+j+2);
            }
                ans.pb(A*x+B*i+1);
        }
        //sort(all(ans));
        for(auto x: ans)cout<<x<<' ';


return 0;
}

