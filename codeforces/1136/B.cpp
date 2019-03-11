#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n,k;
        cin>>n>>k;
        int mn = min(n-k,k-1);
        n*=3;
        int ans = n+mn;
        cout<<ans<<endl;
        
        return 0;

}
