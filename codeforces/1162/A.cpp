#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double , double> pdd;
typedef pair<LL , LL > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<LL> vl;
typedef long double ld;

#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define MAX (int)2e5+5
#define pi	acos(-1.0)
#define ff first
#define ss second
#define mp make_pair
#define check() {printf("OK\n");}
#define mem(a,x) memset(a,x,sizeof(a))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define UN(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define f ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
int main()
{f


        int n,h,m;
        cin>>n>>h>>m;
            vi v(n,h);

            for(int i = 0; i<m;i++){
                int l,r,x;
                cin>>l>>r>>x;
                l--;
                for(int j = l; j<r;j++){
                    v[j] = min(v[j],x);
                }
            }
////            for(int i = 0; i<n;i++)cout<<v[i]<<" ";
////            cout<<nl;
            int ans = 0 ;
            for(int i = 0; i<n;i++){
                ans += v[i] * v[i];
            }
            cout<<ans<<nl;








    return 0;
}

