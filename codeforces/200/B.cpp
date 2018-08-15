#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
            ll t,x;
            cin>>t;
            double sum = 0;
                for(ll i = 0 ; i<t ; i++)
                {
                    cin>>x;
                    sum+=x;
                }

                    printf("%lf\n",sum/t);
    return 0;
}
