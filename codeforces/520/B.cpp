#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

            int n,m;
            cin>>n>>m;
                if(n>=m)
                {
                    cout<<n-m<<endl;
                    return 0;
                }
                int ans = 0 ;
                while(n !=m)
                {
                    if(m<n)m++;
                    else if(m%2)m++;
                    else m = m/2;
                    ans++;
                }
                cout<<ans<<endl;
        return 0;
}

