#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int n,k;
            cin>>n>>k;
            vector<int>v(n);
            for(int i = 0; i<n;i++)
            {
                cin>>v[i];
            }
            for(int i = 0; i<n;i++){
                if(i+1 >= k){
                    cout<<v[k-1]<<endl;
                    return 0;
                }
                k-=i+1;
            }
        return 0;
}


