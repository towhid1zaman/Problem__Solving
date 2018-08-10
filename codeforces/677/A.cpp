#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b;
    cin>>a>>b;
    ll x[a];
            ll  sum  = 0;
        for(ll i = 0; i<a;i++)
        {
            cin>>x[i];
            if(x[i]>b)
            {
                x[i] = 2;
            }
            else
            {
                x[i] = 1;
            }
            sum+=x[i];
        }
        cout<<sum<<endl;
        /*sort(x,x+a);
        if(a<b and x[0]>a)
       {
           cout<<x[1]-a<<endl;
       }
       else
       {
                   if(a<b)
               {
                   cout<<b-a<<endl;
               }
               if(a>b and b == x[0])
               {
                   cout<<a<<endl;
               }
               if(a>b and b != x[0])
               {
                   cout<<a+b<<endl;
               }
               if(a>b and a<x[0])
               {
                   cout<<x[1]-a<<endl;
               }
       }
            */
    return 0;
}
