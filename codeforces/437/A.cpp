
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
const int maxn = 200005;

void task(){
	
	pair<int, string>a[4];
	rep(i,4){
		string s; cin >> s;
		string Number;
		Number.pb(s[0]);
		string question="";
		for(int i = 2; i<s.size();i++){
			question+=s[i];
		}
		a[i].first = question.size();
		a[i].second = Number;
	}
	sort(a,a+4);
	int cnt = 0;
	string ans;
	rep(j,4){
		int on=0,two=0;
		for(int i = 0; i<4; i++){
			if(i==j)continue;
			if(a[j].first*2<=a[i].first)on++;
			if(a[j].first>=a[i].first*2)two++;
		}
		if(on==3 or two==3){
			cnt++;
			ans = a[j].second;
		}
	}
	if(cnt==1){
		cout << ans << endl;
	}
	else cout << "C"<<endl;
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


