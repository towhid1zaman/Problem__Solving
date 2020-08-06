
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
	int n,k; cin >> n >> k;
	string s; cin >> s;
	if(k==2){
		int s1=0,s2=0;
		for(int i = 0; i<n; i++){
			if(s[i]=='A' ^ (i%2==0))s1++;
			else s2++;
		}
		for(int i = 0; i<n; i++){
			if(s1>s2 ^ (i%2==0))s[i]='A';
			else s[i]='B';
		}
		cout << min(s1,s2) << endl;
		cout << s << endl;
		return;
	}

	int ans = 0;
	for(int i = 1; i<n; i++){
		if(s[i]==s[i-1]){
			ans++;
			s[i]='0';
		}
	}
	for(int i = 1;i<n-1; i++){
		if(s[i]=='0'){
		if(s[i-1]!='A' and s[i+1]!='A')s[i]='A';
		else if(s[i-1]!='B' and s[i+1]!='B')s[i]='B';
		else s[i] = 'C';
	  }
	}

	if(s[n-1]=='0' and s[n-2]=='A')s[n-1]='B';
	if(s[n-1]=='0')s[n-1]='A';
	cout << ans << endl;
	cout << s << endl;

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


