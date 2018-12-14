#include<bits/stdc++.h>
using namespace std;

#define  ll long long
#define  f0(n) for(size_t i=0;i<n;i++)
#define  f1(n) for(size_t i=1;i<=n;i++)
#define  mem(a) memset(a,0,sizeof(a))
#define  memn(a) memset(a,1,sizeof(a))
#define  pb push_back
#define  srt(v) sort(v.begin(),v.end())
#define  nl '\n'
int in() {
    int n;
    scanf("%d", &n);
    return n;
}

ll Lin() {
    ll n;
    scanf("%lld", &n);
    return n;
}

double Din() {
    double n;
    scanf("%lf", &n);
    return n;
}
//long long lcm = (x*y)/(__gcd(x,y));
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int n, a[1005000];
int main()
{
	NFS
        cin>>n;
        //int T[n];

                for(int i =1; i<=n;i++)
                {
                    cin>>a[i];
                }
                    int ans = 0;
                    int cnt = 0;
                    for(int i =1 ; i<n; i++)
                    {
                        if(a[i]<=a[i+1])
                        {
                            cnt++;
                        }
                        else
                            cnt = 0;
                        ans = max(ans,cnt);
                    }
                    cout<<ans+1<<nl;


    return 0;
}
