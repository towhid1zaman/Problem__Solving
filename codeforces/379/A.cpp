#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios:: sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

            ll a,b,c;
            cin>>a>>b;
           c = a;
           while(a/b)
            {
                 c=c+(a/b);
                a=(a/b)+(a%b);
            }
            cout<<c<<endl;

            return 0;
}
