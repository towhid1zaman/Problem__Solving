#include<bits/stdc++.h>
using namespace std;
#define NFS ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
int main()
{
	NFS
	long long a ,b;
	cin>>a>>b;
	long long x;
	long long m = 2e9; //745
    long long  t = 0;
    for(int i = 0; i<a; i++)
    {
        cin>>x;
            t+=x;
            m = min(m,x);
    }
    if(t<b)
    {
        cout<<"-1"<<endl;
    }
    else if(t-m*a<b)
    {
        cout<<(t-b)/a<<endl;
    }
    else
            cout<<m<<endl;

    return 0;
}
