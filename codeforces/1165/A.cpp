#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double , double> pdd;
typedef pair<LL , LL > pll;
typedef vector<int> vi;
typedef vector<pii> vpii;
typedef vector<LL> vl;
typedef long double LD;

#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define MAX INT_MAX
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
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
int main()
{f();
    LL n,x,y;
    cin>>n>>x>>y;
    string s;
    cin>>s;
    reverse(s.begin(),s.end());
    int res = 0;
    for(int i =0; i<y;i++){
        if(s[i]=='1'){
                s[i] = '0';
                res++;
        }
    }
        if(s[y]=='0'){
            s[y] = '1';
            res++;
        }
        for(int i = y+1; i<x;i++){
            if(s[i]=='1'){

                res++;
            }
        }
//        if(s[x]=='0'){
//            res++;
//        }
        cout<<res<<endl;



	cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
    return 0;
}
