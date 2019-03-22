#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

#define pb push_back
#define lcm(a,b) a * (b / gcd(a, b))
#define gcd(a,b) __gcd(a,b)
#define nl "\n"
#define inf 2e16
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
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define f(i,a,b) for(int i = a; i<=b;i++)
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int n;
      R(n);
      vector<int>v(n);
      for(int i = 1; i<=n;i++){
        R(v[i]);
      }
      int mx = 0;
      int cnt = 0;
      for(int i = 1; i<=n;i++){
        int u = v[i];
        mx = max(mx,u);
        if(i==mx)
            cnt++;
      }
      cout<<cnt<<endl;

     return 0;
}



