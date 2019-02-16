#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n;i++)cin>>v[i];

        sort(v.begin(),v.end());
                int ans = 0;
        for(int i = 1; i<n;i++){
            while(v[i-1]>=v[i]){
                ans++;
                v[i]++;
            }
        }
        cout<<ans<<endl;

        return 0;
}

