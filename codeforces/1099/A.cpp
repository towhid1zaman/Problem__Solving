#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define MAX INT_MAX
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define check() {printf("OK\n");}
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define mem(a,x) memset(a,x,sizeof(a))
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())


int main()
{f();
        int w,h;
        cin>>w>>h;
        int u1,d1,u2,d2;
        cin>>u1>>d1>>u2>>d2;
        int sum = w;
        for(int i = h; i>=1; i--){
            sum+=i;
            if(d1==i){
                sum-=u1;
            }
            if(d2==i){
                sum-=u2;
            }
            if(sum<0){
                sum = 0;
            }
        }
        cout<<sum<<nl;


return 0;
}
