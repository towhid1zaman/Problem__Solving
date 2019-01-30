#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{

}

int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

//    int t = 1;
//    while(t--)
//    {
//        solve();
//    }
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        int g = 0;
        int t= 0;
        for(int i=0;i<n;i++)
	{
		if(s[i]=='G')
			g=i;
		if(s[i]=='T')
			t=i;
	}

	bool flag=false;
	if(g<t)
	{
		for(int i=g;i<=t;i+=k)
		{
			if(s[i]=='#')
			{
				cout<<"NO"<<endl;
				return 0;
			}
			if(s[i]=='T')
				flag=true;
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}

	if(g>t)
	{
		for(int i=g;i>=t;i-=k)
		{
			if(s[i]=='#')
			{
				cout<<"NO"<<endl;
                        return 0;
			}
			if(s[i]=='T')
				flag=true;
		}
		if(flag)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
        return 0;
}

