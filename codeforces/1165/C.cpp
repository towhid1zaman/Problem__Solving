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
    LL n;
    string s;
    cin>>n>>s;
    s=s+' ';
    LL res = 0;
    for(int i=0;i<s.size()-1;i+=2){
        while(s[i]==s[i+1]){
            s.erase(i+1,1);
            res++;
        }
//                    if(res%2==1){
//                res--;
//            }
//            cout<<res<<nl;
//
    }
            s.erase(s.size()-1,1);
                if(s.size()%2==1){
                s.erase(s.size()-1,1);
                    res++;
            }
    //    else {
    //        res--;
    //    }
                    cout<<res<<nl;;
                    cout<<s<<nl;;









	cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
    return 0;
}

