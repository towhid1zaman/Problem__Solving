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

int main(){f();
        int tt;
        cin>>tt;
        LL n;
        while(tt--){
        cin>>n;
        vector <int>v;
        int x=0,y=0,z=0;
        rep(i,n){
        LL a;
        cin>>a;
        v.pb(a);
        if(a%3==0)
            z++;
        if(a%3==1)
            x++;
        if(a%3==2)
            y++;
    }
    LL res = 0;
    res+=min(x,y);
    x-=res;
    y-=res;
    z+=(x/3);
    res+=y/3;
    res+=z;
    cout<<res<<endl;
    }

return 0;
}

