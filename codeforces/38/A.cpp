#include<bits/stdc++.h>
using namespace std;
using LL=long long;
#define nl "\n"
#define ff first
#define ss second
#define mp make_pair
#define pb push_back
#define MAX INT_MAX
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) a * (b / gcd(a, b))
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
        int n;
        cin>>n;
        n--;
        vector<int>v(n);
        for(int i = 1; i<=n;i++)
        {
            cin>>v[i];
        }
        int a,b;
        cin>>a>>b;
        int res = 0;
        for(int i = a; i<b;i++){
            res+=v[i];
        }
        cout<<res<<nl;






return 0;
}
