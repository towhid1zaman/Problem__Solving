#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int solve(string a, string b, int m,int n)
{
    if(n==0)
        return 1;
    if(m==0)
        return 0;
    if(a[m-1]==b[n-1])
        return solve(a,b,m-1,n-1)+solve(a,b,m-1,n);
    else
        return solve(a,b,m-1,n);
}
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
			string a;
			cin>>a;
			string b = "QAQ";

                    cout<<solve(a,b,a.length(),3)<<endl;
		return 0;
	}

