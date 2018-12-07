#include<bits/stdc++.h>
using namespace std;

#define         ll long long
#define         f0(n) for(size_t i=0;i<n;i++)
#define         f1(n) for(size_t i=1;i<=n;i++)
#define         mem(a) memset(a,0,sizeof(a))
#define         memn(a) memset(a,-1,sizeof(a))
#define         pb push_back
#define 	     srt(v) sort(v.begin(),v.end())
#define         nl '\n'

int in() {int n;scanf("%d", &n);return n;}
ll Lin() {ll n;scanf("%lld", &n);return n;}
double Din() {double n;scanf("%lf", &n);return n;}
//long long lcm = (x*y)/(__gcd(x,y));
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
	NFS
    int a = in(), b = in(), c = in(), d = in();
            int  first1 = (3*a)/10;
            int second1 = a - (a/250) * c;
                int am = max(first1,second1);
            int  first2 = (3*b)/10;
            int second2 = b - (b/250) * d;
                int bm = max(first2,second2);
        if(am==bm)
            cout<<"Tie"<<nl;
       else
            if(am<bm)
            cout<<"Vasya"<<nl;
            if(am>bm)
            cout<<"Misha"<<nl;


    return 0;
}

