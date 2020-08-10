
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
 
void task(){
 	int a,b,c,d; cin >> a >> b >> c >> d;
 	if(abs(c-d)>1 or min(a,b)<max(c,d)){
 		cout << -1 << endl;
 	}
 	else{
 		if(c>d){
		rep(i,a-d)cout<<4;
		rep(i,d)cout<<74;
		rep(i,b-d)cout<<7;
	}
	else if(c<d){
		cout<<7;
		rep(i,a-c)cout<<4;
		rep(i,c-1)cout<<74;
		rep(i,b-c)cout<<7;
		cout<<4;
	}
	else{
		if(a+b<c+d+1){puts("-1");return;}
		rep(i,a-c)cout<<4;
		if(a-c>0){rep(i,c-1)cout<<74;
		rep(i,b-c+1)cout<<7;
		cout<<4;}
		else {
			cout<<7;
			rep(i,c)cout<<47;
			rep(i,b-1-c)cout<<7;
		}
	}
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


