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
	ll year;
	cin>>year;
	/*if(year==1987)
        cout<<year+26<<endl;
   else  if(year==2013)
        cout<<year+1<<endl;
    else if(year<=2000 and year>=1000)
        cout<<year<<endl; */
        while(1)
        {
            year++;
            ll x = year;
            set<int> s;
            while(x>0)
            {
                s.insert(x%10);
                
                x/=10;
            }
            if(s.size()==4)
            {
                cout<<year<<endl;
                return 0;
            }
        }
    return 0;
}
