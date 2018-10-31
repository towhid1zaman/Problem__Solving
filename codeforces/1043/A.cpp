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
	ll n,k,maxx,sum= 0;
	cin>>n;
	vector<int>v(n);
        for(int i = 0; i<n; i++)
        {
            cin>>v[i];
            sum+=v[i];
        }
        //k = *max_element(v.begin(),v.end());
        //ll sum = accumulate(v.begin(), v.end(),0);
        sort(v.begin(), v.end());
        k = v[v.size()-1];
       while(true)
        {
            maxx= n*k - sum;
                if(maxx>sum)
                    break;
                else
                    k++;
                    continue;
        }
        cout<<k<<endl;


    return 0;
}
