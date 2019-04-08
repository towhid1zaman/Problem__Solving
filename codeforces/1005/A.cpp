#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double , double> pdd;
typedef pair<LL , LL > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<LL> vl;

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
#define min3(a,b,c) min(a,min(b,c))
#define max3(a,b,c) max(a,max(b,c))
#define sqr(a) ((a)*(a))
#define mem(a,x) memset(a,x,sizeof(a))
#define RL(x) scanf("%lld",&x)
#define R(x) scanf("%d",&x)
#define RS(x) cin>>s
//#define RSL(x) scanf(" %[^\n]", x)
#define RSL(cin, x) getline(cin, x)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define check cout<<"OK"<<nl;
#define f(i,a,b) for(int i = a; i<=b;i++)
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
int main()
{
    IOS

        int n;
        cin>>n;
        vi v(n);
        for(int i = 0 ; i<n;i++)cin>>v[i];

          set<int>s;
        for(int i = 0; i<n;i++){
            s.insert(v[i]);
        }
        if(s.size()==1){
            cout<<n<<nl;
            for(int i = 0; i<n;i++){
                cout<<v[i]<<" ";
            }
            cout<<nl;
            return 0;
        }

        vi res;
        int t = 0;
        for(int i = 1; i<n;i++){

            if(v[i]<v[i-1]){
                t++;
                res.pb(v[i-1]);
            }
            else if(i==n-1 and v[i]>v[i-1]){
                t++;
                res.pb(v[i]);
            }
             if(v[i]<v[i-1] and i==n-1){
                //check;
                t++;
                res.pb(v[i]);
            }
            else if(v[i]==v[i-1]){
                t++;
                res.pb(v[i]);
            }
        }

        cout<<t<<nl;
        for(int i = 0; i<res.size();i++){
            cout<<res[i]<<" ";
        }cout<<nl;








     return 0;
}
