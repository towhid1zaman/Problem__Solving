#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
void solve()
{
     int n,i;
        cin>>n;
        vector<LL>v(n);

            for(i = 0; i<n;i++)
            {
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            //reverse(v.begin(),v.end());
            map<LL, LL> m;
                for( i = 0; i<n-1;i++)
                {
                    m[ v[i+1]- v[i] ]++;
                }
                    auto it=m.begin();
                cout<<it->first<<" "<<it->second<<endl;
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

