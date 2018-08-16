#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

        ll x[3];
        for(ll i = 0; i<3; i++)
        {
            cin>>x[i];
        }
        sort(x,x+3);
        cout<<x[2] - x[0]<<endl;

        return 0;
}
