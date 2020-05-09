
// </> : towhid1zaman

#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;
#define fill(a,b) memset(a, b, sizeof (a))
#define all(v) (v).begin(),(v).end()
#define sp(k) cout<<setprecision(k)<<fixed;
#define rep(i,a) for(int i=0; i<a;i++)
#define rep1(i,a,b) for(int i=(a);i<=(b);++i)
#define irep(i,b,a) for(int i=(b);i>=(a);--i)
#define minv(v) *min_element(all(v))
#define maxv(v) *max_element(all(v))
#define unq(v) (v).erase(unique(all(v)),(v).end())
#define _ios ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define sqr(a) ((a)*(a))
#define sz(a) int(a.size())
#define ff first
#define ss second
#define pb push_back

const double pi = acos(-1.0);
const int mod = 1000000007; // (int)1e9+7
const int maxn = 2000100;

int main(){
        _ios;

        int T; cin >> T;
        while(T--){
            string s; cin >> s;
            int ans = 0;
            map<pair<int,int>, int > mp;
            mp[{0,0}]++;
            int a,b,x,y;
            a=b=x=y=0;
            for(int i = 0; i<sz(s); i++){
                a = x,b =y;
                if(s[i]=='N') x++;
                else if(s[i]=='S') x--;
                else if(s[i]=='E')y--;
                else if(s[i]=='W')y++;
                if(mp.find({x+a,y+b})==mp.end())ans+=5;
                else ans+=1;
                mp[{x+a,y+b}]++;
            }
            cout<<ans<<endl;
        }


return 0;
}

