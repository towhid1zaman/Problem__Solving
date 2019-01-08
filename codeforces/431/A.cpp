#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       vector<int>a(4);
       int x;
        string s;
        for(int i = 0; i<4; i++)
        {
            cin>>a[i];
        }
        cin>>s;
        int ans = 0;
        int len = s.length();

            for(int i = 0; i<len; i++)
            {
               ans+=a[s[i] - '1'];
            }
            cout<<ans<<endl;

        return 0;
}
