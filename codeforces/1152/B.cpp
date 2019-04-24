
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
#define check printf("OK\n");
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
#define f(i,a,b) for(int i = a; i<=b;i++)
#define IOS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
bool test(int a){
        for(int i = 2; i<=(a+1); i*=2)
        {
            if(i==a+1){
                return true;
            }
        }
        return false;
}
int main()
{
    IOS
            unsigned int  x,p,b,ops=0;
            cin>>x;
            vector<int> bits;
            vector<int> ans;
            while(!test(x)){
                //cout<<x<<nl;
                for(int i = 1,j=1; i<x;i*=2,j++){
                    if((x&i)==0){
                        b = (i<<1) - 1;
                        p = j;
                        //cout<<p<<nl;
                    }
                }
            ans.pb(p);
            x = x^b;
            ops++;
            if(test(x)){
                break;
            }
                    x++;
                    ops++;
            }


        cout<<ops<<nl;
        for(int i = 0; i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
        cout<<nl;






     return 0;
}
