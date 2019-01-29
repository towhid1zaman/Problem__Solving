#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
        int a,b;
        cin>>a>>b;
        //cout<<a/4 <<"/"<<a/b<<endl;
        int k = 7 - max(a,b);
        int L = __gcd(k,6);
        cout<<k/L<<"/"<<6/L<<endl;
}

int main()
        {
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--)
    {
        solve();
    }
        return 0;
}

