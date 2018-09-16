#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

	NFS
	int t;
	cin>>t;
	int x[t];
        f0(t)
        {
                cin>>x[i];
        }
        sort(x,x+t);
        int cnt = 0;
       for(int i = 1; i<t; i++)
       {
               cnt+=x[i] - x[i-1] -1;
       }
        cout<<cnt<<endl;

    return 0;
}
