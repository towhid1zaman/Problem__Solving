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
	ll m,t;
	ll b,c,x=0,y=0;
	cin>>t;
	f1(t){
        cin>>m;
            if(m&1){
                x++;b=i;
            }
            else{
                y++;c=i;
            }
        }
	if(x>y)
        cout<<c<<endl;
	else
        cout<<b<<endl;

    return 0;
}
