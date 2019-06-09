#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long LL;
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


int main(){f();
            int tc;
             LL n;
            cin>>tc;
        while(tc--)
        {
        int ans = 0;
        cin>>n;
            while(1)
            {
                if(n%2==0)
                {
                    n = n/2;
                    ans++;
                }
                if(n%3==0)
                {
                    n = ((2*n)/3);
                    ans++;
                }
                if(n%5==0)
                {
                    n = ((n*4)/5);
                    ans++;
                }
                if(n==1){
                    break;
                }
                if(n%2 !=0 and n%3!=0 and n%5 !=0 and n !=1){
                    ans = -1;
                    break;
                }

            }
            cout<<ans<<endl;
    }



return 0;
}


