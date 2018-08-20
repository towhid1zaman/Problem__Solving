#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int sum = 0,a;
	for(ll i = 0;i < 5;i++)
	{
		cin >> a;
		sum += a;
	}
	if(sum % 5 != 0 || sum == 0)
		cout << "-1" << endl;
	else
		cout << sum / 5 << endl;

    return 0;
}
