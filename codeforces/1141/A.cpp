#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define 	RL(x) 		scanf("%lld",&x)
#define 	R(x) 		scanf("%d",&x)
#define 	pb     		push_back
#define 	lcm(a,b)       	a * (b / gcd(a, b))
#define 	gcd(a,b)       	__gcd(a,b)
#define 	nl 		'\n'
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int  n,m;
      R(n);
      R(m);
      if(m%n !=0)
      {
          cout<<-1<<nl;
          return 0;
      }

      int res = 0;
        if(m%n==0)
        {
                int  d = m/n;
                while(d%2==0){
                    d/=2;
                    res++;
                }
               // cout<<d<<nl;
                while(d%3==0){
                    d/=3;
                    res++;
                }
                //cout<<d<<nl;
                if(d != 1) res = -1;
        }
                cout<<res<<nl;

     return 0;
}


