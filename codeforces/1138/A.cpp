#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
            ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
        int ans=0,x=1,p=-1,k=0,l=0,h=1;
	for(int i=0; i<n; i++)
	{
		if(a[h]==a[l]){
			x++;
			h++;
		}
		else{
			l = h;
			p = (k+x-abs(k-x));
			k=x;
			x=1;
			h++;
		}
		ans = max(ans,p);
	}

	cout<<ans<<endl;

	return 0;
}
