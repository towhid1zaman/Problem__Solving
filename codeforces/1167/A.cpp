#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
#define MAX INT_MAX
#define pi acos(-1.0)
#define ff first
#define ss second
#define mp make_pair
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,n)
#define check() {printf("OK\n");}
#define mem(a,x) memset(a,x,sizeof(a))
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define UNQ(v) SORT(v),(v).erase(unique((v).begin(),(v).end()),(v).end())
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
int main()
{f();
        
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;
            cin>>s;
             int cnt = 0;
                for(int i = 0; i<(int)s.size()-10;i++){
                    if(s[i]=='8'){
                        cnt++;
                    }
                }
               if(cnt>0) cout<<"YES"<<nl;
               else cout<<"NO"<<nl;
        }








cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
return 0;
}