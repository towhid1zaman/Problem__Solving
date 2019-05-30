#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define mp(a,b) make_pair(a,b)
#define check() {printf("OK\n");}
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define P(x) printf("%d\n",x)
#define Pl(x) printf("%lld\n",x)

///sortingstringbytheirlengthincreasingorder
bool ff(string s1,string s2){
    return s1.size()<s2.size();
}
        ///vector<string>s;sort(s.begin(),s.end(),ff)

int main(){f();
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
      vector<int>v(5);
      int sum = 0;
      for(int i = 0; i<5;i++)
      {
          cin>>v[i];
          sum+=v[i];
      }
      SORT(v);
      if(v[0]==v[1]){
        sum = min(sum,v[2]+v[3]+v[4]);
      }
      if(v[1]==v[2]){
        sum = min(sum,v[0]+v[3]+v[4]);
      }
      if(v[2]==v[3]){
        sum = min(sum,v[1]+v[0]+v[4]);
      }
      if(v[3]==v[4]){
        sum = min(sum,v[2]+v[1]+v[0]);
      }
      if(v[0]==v[1] and v[0]==v[2]){
        sum = min(sum, v[3]+v[4]);
      }
      if(v[2]==v[1] and v[2]==v[3]){
        sum = min(sum, v[0]+v[4]);
      }
      if(v[2]==v[3] and v[2]==v[4]){
        sum = min(sum, v[0]+v[1]);
      }
      cout<<sum<<nl;

return 0;
}
