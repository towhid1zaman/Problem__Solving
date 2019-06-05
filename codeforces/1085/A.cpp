#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))

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

///sortingstringbytheirlengthincreasingorder
bool ff(string s1,string s2){
    return s1.size()<s2.size();
}
///vector<string>s;sort(s.begin(),s.end(),ff)
//LL gcd(LL a, LL b){return b==0 ? a : gcd(b,a%b);}
int main(){f();
        string s;
        cin>>s;
        int n = s.length();
        int m = n/2;
        //cout<<n<<" "<<m<<nl;
        string res="";
        if(n%2==0)
        {
            res+=s[m-1];
            for(int i = (m-2),j=m; i>=0,j<n;i--,j++)
            {
                string p ="";
                string q ="";
                p+=s[j];
                res+=p;
                q+=s[i];
                res+=q;
            }
        }
        else if(n%2==1)
        {
            res+=s[m];
            for(int i = (m-1),j=(m+1);i>=0,j<n;i--,j++)
            {
                string p="";
                string q="";
                p+=s[j];
                res+=p;
                q+=s[i];
                res+=q;
            }
        }
        int len = res.length();
        //cout<<len<<nl;
        if(n%2==0)
        {
            len-=1;
        }
        //cout<<len<<nl;
        for(int i = 0; i<len;i++)
        {
            cout<<res[i];
        }


return 0;
}