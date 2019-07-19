#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
typedef vector<int> vi;
typedef pair <int, int> pii;
typedef vector<pii>vip;
#define endl "\n"
#define F first
#define S second
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)
#define all(v) (v).begin(),(v).end()
#define pd(x,k) cout<<setprecision(k)<<fixed<<x<<endl;
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
#define minv(v) *min_element(v.begin(),v.end())
#define maxv(v) *max_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define IO ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define unq(v) sort(all(v)),(v).erase(unique((v).begin(),(v).end()),(v).end())

const int mod = 1000000007; // (int)1e9+7
const int N = int(3e5) + 99;


int main(){IO

			string s;
			cin>>s;
			map<char,int>mp;
			sort(s.begin(),s.end());
			for(int i = 0; i<s.length();i++)
            {
                mp[s[i]]++;
            }
            char ch = s[s.length()-1];
            int k ;
            each(i,mp){
                if((*i).F==ch){
                    k = (*i).S;
                }
            }
            for(int i = 0; i<k;i++){
                cout<<ch;
            }






return 0;
}


