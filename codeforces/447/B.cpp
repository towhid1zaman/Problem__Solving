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

        string s;
        cin>>s;
        int k;
        cin>>k;
        vector<int>w(26);
        int mx = 0;
        for(int i = 0; i<26;i++)
        {
            cin>>w[i];
            mx = max(mx,w[i]);
        }
        int n = s.length();
        int sum = 0;
        for(int i = 0; i<n;i++)
        {
            sum+=w[s[i]-'a'] *(i+1);
        }
       // cout<<sum<<nl;
        for(int i = n;i<(n+k);i++){
            sum+= mx*(i+1);
        }
        cout<<sum<<nl;

return 0;
}










