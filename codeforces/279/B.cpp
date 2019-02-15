#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        LL n,t;
        cin>>n>>t;
        vector<LL>a(n);
        for(int i = 0; i<n;i++)cin>>a[i];
        int r = 0;
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<n;i++)
        {
            while(r<n and sum+a[r] <= t){
                sum+=a[r];
                r++;
            }
            ans = max(ans,r-i);
            sum-=a[i];
        }
        cout<<ans<<endl;
        return 0;
}


