#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    LL n, k;
    int t ;
    cin>>t;
        for(int i = 0; i<t;i++)
        {
            cin>>n>>k;
              LL  res = 9* (n-1) + k;
                cout<<res<<endl;
        }

}
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    t= 1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
        return 0;
}


