#include<bits/stdc++.h>
using namespace std;

#define         ll long long
#define         f0(n) for(size_t i=0;i<n;i++)
#define         f1(n) for(size_t i=1;i<=n;i++)
#define         mem(a) memset(a,0,sizeof(a))
#define         memn(a) memset(a,-1,sizeof(a))
#define         pb push_back
#define	        srt(v) sort(v.begin(),v.end())
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
   // int a = in(), b = in();
   int a,c;
   cin>>a>>c;
    //int v[a];
    vector<int>v(a);
    int cnt = 1;
            for(int i = 0; i<a;i++)
            {
                cin>>v[i];
            }
                for(int i = 1; i<a;i++)
                {
                    if(v[i]-v[i-1]<=c)
                    {
                        cnt++;
                    }
                    else
                        cnt = 1;
                }
                cout<<cnt<<endl;

    return 0;
}

