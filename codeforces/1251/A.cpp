#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define all(v) (v).begin(),(v).end()
#define sp(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i,a,b) for(int i =(a); i <=(b);++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define endl "\n"
#define F first
#define S second
#define pb push_back
#define mp make_pair
const int mod = 1000000007; // (int)1e9+7
const int N = 200010;
void solve()
{
        string s;
		cin>>s;
		set<char>ss;
		bool chk = false;
		for(int i = 0; i<s.length();)
		{
			if(s[i]==s[i+1]){
				i = i+2;
			}
			else{
                    chk = true;
				ss.insert(s[i]);
				i++;
        }
    }
		if(!chk){
			cout<<endl;
		}
		else{
			for(auto x: ss)
			{
				cout<<x;
			}
			cout<<endl;
		}
}


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    cerr.tie(nullptr);
    int q;
    cin>>q;
    while(q--){
        solve();
    }




return 0;
}



