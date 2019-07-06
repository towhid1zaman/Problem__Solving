#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define srt(v) sort(v.begin(),v.end())
#define rev(v) reverse(v.begin(),v.end())

#define mem(a,x) memset(a,x,sizeof(a))
#define trav(x,a) for(auto &x: a)
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7

typedef vector <int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;

int main(){f();

		LL n;
		cin>>n;
		vector<LL>v(n);
		for(int i = 0; i<n;i++){
                cin>>v[i];
		}
		srt(v);

		LL sum = v[n-2]+v[n-3];

		if(v[n-1]>=sum){
                cout<<"NO"<<nl;
		}
		else{
                cout<<"YES"<<nl;
                cout<<v[n-2]<<" "<<v[n-1]<<" "<<v[n-3]<<" ";
            for(int i = 0;i<n-3;i++){
                    cout<<v[i]<<" ";
            }
                cout<<nl;
		}








return 0;
}


