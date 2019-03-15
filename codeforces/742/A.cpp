#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      LL n;
      cin>>n;
      if(n==0)cout<<1<<endl;
      else{
            if(n%4==0)cout<<6<<endl;
            else if(n%4==1)cout<<8<<endl;
            else if(n%4==2)cout<<4<<endl;
            else if(n%4==3)cout<<2<<endl;
      }
     return 0;
}



