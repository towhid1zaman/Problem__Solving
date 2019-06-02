#include "bits/stdc++.h"
using namespace std;
typedef unsigned long long LL;
#define nl "\n"
#define X first
#define Y second

#define MAX INT_MAX
#define pb(a) push_back(a)
#define mp(a,b) make_pair(a,b)

#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))

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

///sortingstringbytheirlengthincreasingorder
bool ff(string s1,string s2){
    return s1.size()<s2.size();
}
///vector<string>s;sort(s.begin(),s.end(),ff)

int main(){f();
        LL n;
        cin>>n;
        LL len = 1;
        LL num = 9;
        while(n>len*num)
        {
            n   -= len*num;
            ++len;
            num*=10;
        }
        num/=9;
        LL res = num + (n-1)/len;
        for(int i = len-1-(n-1)%len;i--;){
            res/=10;
        }
        cout<<res%10<<nl;

return 0;
}

