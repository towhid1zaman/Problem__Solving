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
#define rep(i, n) for(int i = 0; i < (n); ++i)
#define rep1(i, n) for(int i = 1; i <= (n); ++i)
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())

#define each(it,s) for(auto it = s.begin(); it != s.end(); ++it)
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define unq(v) srt(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define MOD 1000000007   // (int)1e9+7
int n;
vector<int>v;
int x1,x2,x3,x4,x5,x6;
int main(){f();
            cin>>n;
            rep(i,n)
            {
                int p;
                cin>>p;
                 v.pb(p);
            }
            if(n<6){
                cout<<n<<nl;
                return 0;
            }
            rep(i,v.size()){
                if(v[i]==4){
                    x1++;
                }
                if(v[i]==8){
                    x2+=min(x1,1);
                    x1-=min(1,x1);
                }
                if(v[i]==15){
                    x3+=min(x2,1);
                    x2-=min(1,x2);
                }
                 if(v[i]==16){
                  x4+=min(x3,1);
                    x3-=min(1,x3);
                }
                 if(v[i]==23){
                   x5+=min(x4,1);
                    x4-=min(1,x4);
                }
                 if(v[i]==42){
                   x6+=min(x5,1);
                    x5-=min(1,x5);
                }
            }
        cout<<n-6*x6<<nl;

return 0;
}


