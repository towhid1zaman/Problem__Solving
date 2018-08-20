#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(i,n) for(i=0;i<n;i++)
#define f1(i,n) for(i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++)
    {
        char t;
        cin>>t;
        a[i]=int(t)-48;   ///Ascii value of 0 = 48
    }
    int b[1000];
    for(int i=0;i<n;i++)
    {
        char t;
        cin>>t;
        b[i]=int(t)-48; ///Ascii value of 0 = 48
    }
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int x=b[i]-a[i];
        if(x<0)
        {
            x=-x;
        }
        if(x>5)
        {
            ans+=10-x;
        }
        else{
            ans+=x;
        }
    }
    cout<<ans<<endl;
    return 0;
}


