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
	int k,n,muxx,sum=0;
    cin>>n;
    int s[n];
        for(int i = 0; i<n;i++)
        {
            cin>>s[i];
            sum+=s[i];
        }
        sort(s,s+n);
        k = s[n-1];
        while(1)
        {
            muxx= n*k - sum;
            if(muxx>sum)
                    break;
            else
                k++;
            continue;
        }
        cout<<k<<endl;


    return 0;
}
