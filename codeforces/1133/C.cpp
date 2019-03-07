#include<bits/stdc++.h>
using namespace std;
 typedef long long LL;

 int main()
 {
             ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
     int n;
     cin>>n;
     vector<int>v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans = 1;
        int low = 0;
        int x;
        for(int i = 0; i<n;i++){
            while(low < i and v[i]-v[low] >5)low++;
            x = i - low + 1;
            ans = max(ans,x);
        }
        cout<<ans<<endl;

        return 0;
 }
