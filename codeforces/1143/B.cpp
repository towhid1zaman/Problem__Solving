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
#define RS(x) cin>>s
//#define RSL(x) scanf(" %[^\n]", x)
#define RSL(cin, x) getline(cin, x)
#define SORT(v) sort(v.begin(),v.end())
#define REV(v) reverse(v.begin(),v.end())
#define f(i,a,b) for(int i = a; i<=b;i++)
LL N, F[27][2];
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      cin>>N;
      LL t = 1, cnt  =1;
      while(t<=N) t*=10,cnt++;
      cnt--; t= N; F[0][0] = 1;
      for(LL i = 1; i<=cnt;i++)
      {
          if(t%10)F[i][0] = max(F[i-1][0] *(t%10),F[i-1][1]*(t%10-1));
          F[i][1] = max(F[i-1][0]*9,F[i-1][1]*9);
          t = t/10;
      }

        LL res  = max(F[cnt][0], F[cnt-1][1]);

        cout<<res<<endl;




     return 0;
}



