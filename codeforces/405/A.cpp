#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    ll t;
    cin>>t;

    ll Gravity[t+1];

            for(ll i = 0 ; i<t ; i++)
            {
                cin>>Gravity[i];
            }
            sort(Gravity,Gravity+t);
            for(ll i = 0 ; i<t ; i++)
            {
                cout<<Gravity[i]<<" ";
            }
            cout<<endl;

            return 0;
}
