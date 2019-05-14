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
#define f() {ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);}
#define maxv(v) *max_element(v.begin(),v.end())
#define minv(v) *min_element(v.begin(),v.end())
int main()
{f();

        int n, k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
//            cout<<v[k]<<nl;
//        for(int i = 0; i<n;i++){
//            cout<<v[i]<<" ";
//        }cout<<nl;
        int res;
        if(k==0){
                    res = v[0] - 1;
        }
        else
            res = v[k-1];

            int cnt = 0;
            for(int i = 0; i<n;i++){
                if(v[i] <= res){
                    cnt ++;
                }
            }
            if(res<1 or cnt !=k){
                cout<<-1<<nl;
            }
            else
                cout<<res<<nl;



	cerr << "Time : " << (double)clock() / (double)CLOCKS_PER_SEC << "s\n";
    return 0;
}

