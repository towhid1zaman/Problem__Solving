#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    int n,m;
    cin>>n>>m;
    vector<int>vn(n),vm(m);
        for(int i = 0; i<n; i++)cin>>vn[i];
        for(int i = 0; i<m; i++)cin>>vm[i];
        int res=100000;
        for(int i = 0; i<n;i++)
        {
            for(int j = 0; j<m;j++)
            {
                if(vn[i]==vm[j]){
                        res = min(res,vn[i]);
                }
                else
                {
                    res = min(res,vn[i] * 10 + vm[j]);
                    res = min(res,vm[j] * 10 + vn[i]);
                }
            }
        }
        cout<<res<<endl;
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



