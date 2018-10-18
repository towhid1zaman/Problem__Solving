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
	    long long int a,b,c,t1,t2,t3;
    cin>>a>>b>>c>>t1>>t2>>t3;
    int sta = abs(a-b)*t1;
    int el1 = abs(a-c) * t2 +(t3 + t3);
    int el2 = abs(a-b) * t2;
    int ela  = el1+ el2 + t3;

        if(ela<=sta)
        {
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

        return 0;


    return 0;
}
