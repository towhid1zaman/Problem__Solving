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
    string s;
	cin>>s;
	ll len = s.length();
	ll f = 1;
        f0(len)
        {
            if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B')
            {
                i+=2;
                if(!f)
                 cout<<" ";
            }
        else
            {
                f =0;
                cout<<s[i];
            }
        }
        cout<<endl;
     return 0;
}
