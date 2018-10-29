#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
#define mem(a) memset(a,0,sizeof(a))
#define memn(a) memset(a,-1,sizeof(a))
#define pb push_back
#define nl '\n'
const double pi= acos(-1);
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{

	NFS
	ll n1, n2, k1, k2;
	cin>>n1>>n2>>k1>>k2;
        ll s1 = 0;
        ll s2 = 0;
        for(int i = 1; i<=k1;i++)
        {
            s1 +=n1 + i;
        }
         for(int i = 1; i<=k2;i++)
        {
            s2 +=n2 + i;
        }
        //cout<<s1<<  " " <<s2<<endl;
        if(n1>n2)
        {
            cout<<"First"<<endl;
        }
        else
            cout<<"Second"<<endl;



    return 0;
}
