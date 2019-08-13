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
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define rep2(i,a,b) for(int i =(a); i <=(b); ++i)
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
        string s,t;
    cin>>s>>t;
    vector<int>ans;
    int n=s.length();
    rep(i,n){
        for(int j=i;j<n;j++){
            string temp="";
            for(int k=0;k<s.length();k++){
                if(k>=i && k<=j)
                {
                    continue;
                }
                temp+=s[k];
            }
            int p=0;
            for(int k=0;k<temp.length() && p<t.length();k++){
                if(temp[k]==t[p])p++;
            }
            if(p==t.length()){
                ans.pb(j-i+1);
            }
        }
    }
    int mx=0;
    for(int i=0;i<ans.size();i++){
        mx=max(ans[i],mx);
    }
    cout<<mx;

return 0;
}


