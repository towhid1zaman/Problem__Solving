#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define endl "\n"
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
vector<int>v;
void seive(int n){
        bool prime[n+1];
        memset(prime,true,sizeof(prime));
        for(int p= 2; p*p<=n;p++)
        {
            /// true means prime
            if(prime[p]==true)
            {
                    for(int i = p*p;i<=n;i+=p){
                        prime[i] = false;
                    }

            }
        }
        for(int i = 2; i<=n;i++){
            if(prime[i]==true){
                v.push_back(i);
            }
        }
}

int main(){f();
            int n;
            vector<int>ans;
            cin>>n;
            seive(n);
            ans = v;
            for(int i = 0; i<v.size();i++)
            {
                int r = 2;
                int x = pow(ans[i],r);
                while(x<=n){
                    ans.push_back(x);
                    r++;
                    x = pow(ans[i],r);
                }
            }
            cout<<ans.size()<<endl;
            for(int i = 0; i<ans.size();i++)
            {
                cout<<ans[i]<<" ";
            }
            cout<<endl;




return 0;
}









