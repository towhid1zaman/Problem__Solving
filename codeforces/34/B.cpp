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

int main(){f();

        int n,m;
        cin>>n>>m;
        vector<int>v(n);
        vector<int>ans;
        for(int i = 0; i<n;i++)
        {
            cin>>v[i];
            if(v[i]<0){
                ans.pb(v[i] * -1);
            }
        }
        srt(ans);
        int sum = 0;
        rev(ans);
        if(ans.size()>=m){
            for(int i=0; i<m;i++){
                sum+=ans[i];
            }
        }
        else if(ans.size()<m){
            for(int i = 0; i<ans.size();i++)
                {
                    sum+=ans[i];
                }
        }
        cout<<sum<<nl;




return 0;
}





