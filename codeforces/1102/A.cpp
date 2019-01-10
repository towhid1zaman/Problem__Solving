#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        LL n;
        cin>>n;
        LL P = n*(n+1);
            if((P/2)%2==0) cout<<0;
            else
                cout<<1;

        return 0;
}
