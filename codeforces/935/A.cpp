#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
		int n;
		cin>>n;
		//int res = sqrt(n);
			int cnt = 0;
				for(int i = 1; i<n;i++)
				{
					if(n%i==0)
					{
						cnt++;
					}
				}
		cout<<cnt<<endl;
		return 0; 
	} 