//https://youtu.be/3I3l-x93kOY
#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define scan(n) scanf("%d", &n)
#define pin(n) printf("%d\n",n)
#define scanl(n) scanf("%lld", &n)
#define pll(n) printf("%lld\n",n)
const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;


int main(){
IO

	int n;
	cin>>n;
	vll v(n+1);
	rep(i,0,n-1){
        cin>>v[i];
	}
	ll res = 0,ans=1,ok=0;
	rep(i,0,n-1){
	    if(v[i]>=1){
           res+=v[i]-1;
	    }
	    else if(v[i] <= -1){
            res+=(-1-v[i]);
            ans*=-1;
	    }
	    else if(!v[i]){
            res++;
            ok=1;
	    }
	}
	if(ans==1 or ok){
        cout<<res<<endl;
	}
	else cout<<res+2<<endl;








return 0;
}



