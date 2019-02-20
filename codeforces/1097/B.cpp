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
        for(int i = 0; i<(1<<n);i++)
        {
            int sum  = 0;
            for(int k  = 0; k<n;k++){
                if(i & (1<<k))sum+=v[k];
                else sum-=v[k];
            }
            if(sum%360==0){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;

        return 0;
}


