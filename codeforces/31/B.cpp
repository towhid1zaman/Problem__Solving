
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair< int, int > pii;
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
const int maxn = 2000100;



int main(){
        _
        string s; cin >> s;
        int cnt = 0;
        int n = sz(s);
        int cntx  = count(all(s),'@');
        if(s[0]=='@' or s[sz(s)-1]=='@' or n<=2 or cntx==0){
            cout<<"No solution"<<endl;
            return 0;
        }
        if(n==3){
            if(s[0]!='@' and s[1]=='@' and s[2]!='@'){
                cout<<s<<endl;
            }
            return 0;
        }
        int pos = 0;
        for(int i = 0; i<n; i++){
            if(s[i]=='@')pos = i;
        }
        string ans="";
        for (int i =0; i<n;i++){
            bool b = false;
            while (i < n && s[i] != '@'){
                b=true;
                ans += s[i++];
            }
            if (i >= n-1 or !b or s[i+1] == '@'){
                cout<<"No solution"<<endl;
                return 0;
            }

            ans += s[i++];
            if (i > pos){
                ans += s.substr(i);
                break;
            }
            ans += s[i];
            ans += ',';
        }
        cout<<ans<<endl;


return 0;
}


