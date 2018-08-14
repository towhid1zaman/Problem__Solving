#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios :: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll a, b,c,d;
    cin>>a>>b;
    ll x[b],ai;
            for(ll i = 0; i<b;i++)
            {
                cin>>x[i];
            }
            ai = x[0];

            for(ll i = 1; i<b;i++)
            {
                if(x[i-1]<=x[i])
                {
                    ai+=x[i] - x[i-1];


                }
                else
                  ai+=a-x[i-1]+x[i];
                     
            }

            cout<<ai-1<<endl;
    return 0;
}

