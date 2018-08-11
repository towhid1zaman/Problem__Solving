#include<bits/stdc++.h>
using namespace std;

#define ll long long
int main()
{
   ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

    ll m,n;
    cin>>m>>n;

    ll result = m + ((m-1)/(n-1));
    cout<<result<<endl;

    /*
    if(m==n)
    {
        cout<<m+1<<endl;
    }
    else if((m>n) and (m%2==0 and n%2==0))
    {
        cout<<(m*n)-1<<endl;
    }
    else if(m>n)
    {
        cout<<(m+n)+1<<endl;
    }
  else  if(m<n)
    {
        cout<<m<<endl;
    }
    */
        return 0;
}
