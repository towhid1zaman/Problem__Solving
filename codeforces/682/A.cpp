#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
        LL x,y;
        LL cnt =0;
        cin>>x>>y;
               LL i =1 ;
                for(LL j = 1; j<=x;j++)
                {
                    cnt+=(y+j) / 5-j /5;
                }
                cout<<cnt<<endl;
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
