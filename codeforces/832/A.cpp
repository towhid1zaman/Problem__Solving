#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
		LL n,k;
		LL S = 0, L = 0;
		cin>>n>>k;
		if(n==k)
		{
			cout<<"YES"<<endl;
			return 0;
		}
		else
		{
			LL res = ceil(n/k);
			if(res%2==1)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}

		return 0;
	}