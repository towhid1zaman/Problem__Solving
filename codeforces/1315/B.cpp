#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;typedef vector<ll> vll;
#define fill(a) memset(a, 0, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define getpos(v,x) (lower_bound(v.begin(),v.end(),x)-v.begin())
#define _ios ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define ff first
#define ss second
#define pb push_back
#define sz(x) (int)x.size()

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;
int Q,A,B,P,R,Ans;
bool fnd;char agee;
int main(){
	_ios;
	cin>>Q;
	while(Q--){
		cin>>A>>B>>P;
		string S;
		cin>>S;
		fnd=0;
		agee='C';
		for(int i=S.length()-2;i>=0&&!fnd;--i){
			if(S[i]!=agee){
				agee=S[i];
				if(S[i]=='A') R=A;
				else R=B;
				P-=R;
				if(P<0){
					cout<<i+2<<'\n';
					fnd=1;
				}
			}
		}
		if(!fnd) cout<<1<<endl;
	}
	return 0;
}

