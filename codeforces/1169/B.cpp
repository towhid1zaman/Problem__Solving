#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
#define nl "\n"
#define X first
#define Y second
#define MAX INT_MAX
#define pb(a) push_back(a)
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a*(b/gcd(a, b))
#define mp(a,b) make_pair(a,b)
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
#define S(x) scanf("%d",&x)
#define Sl(x) scanf("%lld",&x)
#define P(x) printf("%d\n",x)
#define Pl(x) printf("%lld\n",x)
#define pi pair<int,int>
vector<pi>v;
int n,m,x,y;
int a[300005];
int main(){f();
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

        cin>>n>>m;
        for(int i = 1; i<=m;i++)
        {
            cin>>x>>y;
            v.pb(mp(x,y));
        }
        int g = 0;
        int mix = 0;
        rep(i,m){
            if(v[i].X !=x and v[i].Y !=x){
                g++;
                a[v[i].X]++;
                mix = max(mix,a[v[i].X]);
                a[v[i].Y]++;
                mix = max(mix, a[v[i].Y]);
            }
        }
        if(mix==g){
            cout<<"YES"<<nl;
            return 0;
        }
        rep1(i,n){
            a[i] = 0;
        }
        mix = 0;
        g =0;
        rep(i,m)
        {
            if(v[i].X !=y and v[i].Y !=y){
                g++;
                a[v[i].X]++;
                mix = max(mix,a[v[i].X]);
                a[v[i].Y]++;
                mix = max(mix, a[v[i].Y]);
            }
        }
        if(mix==g){
            cout<<"YES"<<nl;
            return 0;
        }
        cout<<"NO"<<nl;



return 0;
}

