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
    //cout<<m<<" "<<n<<endl;
    if(m>n or m==n)
      {
          ll baki = m - n;
          cout<<n<<" "<<baki/2<<endl;
      }
      if(m<n)
      {
          ll baki = n - m;
          cout<<m<<" "<<baki/2<<endl;
      }

  return 0;
}