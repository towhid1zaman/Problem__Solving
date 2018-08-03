#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int sum=0,dif,i,n,m;
	cin>>n;
	cin>>m;
	long long int a[n];
	long long int t[n];

	for(i=0;i<n;i++)
	{
		cin>>a[i];
		t[i]=0;
	}


	for(i=0;i<n;i++)
	{
		if(sum<m)
		{
			sum+=a[i];
		}

		if (sum>=m)
		{
		  t[i]=sum/m;
			sum=sum%m;
		}
	}

	for (i=0;i<n;i++)
        cout << t[i] << " ";
    return 0;

}
