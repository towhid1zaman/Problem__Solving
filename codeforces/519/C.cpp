#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
 int table[101][101];
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       LL n,m;
       cin>>n>>m;
            LL x = (n+m)/ 3;
            LL ans = min(min(x,n),m);
            cout<<ans<<endl;

    return 0;
}






