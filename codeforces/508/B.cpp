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

string solve(string s)
{
    int n = s.length();
    int even = MAX;
    int pos;
    for(int i = 0; i<n-1;i++)
    {
        if((s[i]-'0')%2==0)
        {
            even = s[i] - '0';
            pos = i;
        }
        if(even<=s[n-1]-'0'){
            break;
        }

    }
    if(even==MAX){
        return s;
    }

    swap(s[pos],s[n-1]);
    return s;
}

int main(){f();

      string s;
      cin>>s;
      bool f = true;
      for(int i = 0; i<s.length();i++)
      {
          if(s[i]=='0' or s[i]=='2' or s[i]=='4' or s[i]=='6' or s[i]=='8'){
            f = false;
          }
      }
      if(f){
        cout<<-1<<nl;
        return 0;
      }
      else{

        string ans = solve(s);
        cout<<ans<<nl;
      }


return 0;
}


