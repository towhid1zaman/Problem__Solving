#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        ll a;
       set<ll> s;
       for(ll i=0;i<4;i++)
       {
           cin>>a;
           s.insert(a);
       }
       cout<<4-s.size()<<endl;
            return 0;
}
