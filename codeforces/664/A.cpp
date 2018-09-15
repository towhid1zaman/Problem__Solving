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
	string s1,s2;
	cin>>s1>>s2;
        ll len1 = s1.length();
        ll len2 = s2.length();
        ll cnt = 0;
            if(s1[0]==s2[0] and s1[len1-1]==s2[len2-1] and len1==len2)
            {
                cout<<s1;
            }
            else
                cout<<"1"<<endl;
       return 0;
}
