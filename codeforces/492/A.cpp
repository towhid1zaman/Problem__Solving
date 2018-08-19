#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  int n,k,m,c;
  cin>>n;
    //if(n==1) cout<<n<<endl;
    //else
     //{
     k=0;
      m=0;
       c=0;
       for(ll i =1; i<=10000;i++)
        {
       k = k+i;
        m+=k;
         //cout<<k<<endl;
          if(m>n) break;
          c++;
     }
     cout<<c<<endl;
   //}

  return 0;
}