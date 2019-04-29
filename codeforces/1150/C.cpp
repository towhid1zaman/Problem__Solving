
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
int main()
{
    IOS
        int n;
        cin>>n;
        int x = 0;
        int y = 0;
        int a;
        for(int i = 0; i<n;i++){
            cin>>a;
            if(a==1){
                x++;
            }
            else y++;
        }
        if(!x){
            for(int  i= 0; i<n;i++){
                cout<<"2"<<nl;
            }
        }
        else if(!y){
            for(int i = 0; i<n;i++){
                cout<<"1"<<nl;
            }
        }
        else {
            cout<<"2"<<" "<<"1"<<" ";
            for(int i = 0; i<y-1;i++){
                cout<<"2 ";
            }
            for(int i = 0; i<x-1; i++){
                cout<<"1 ";
            }
        }







     return 0;
}
