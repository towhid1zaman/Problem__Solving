#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }

        ///sort(v.begin(),v.end());
            int ls = 0;
            int rs = 0;
            for(int i = 0; i<n;i++){
                if(v[i]<=k){
                    ls++;
                }
                if(v[i]>k){
                    break;
                }
            }
            reverse(v.begin(),v.end());
            for(int i = 0; i<n;i++){
                if(v[i]<=k){
                    rs++;
                }
                if(v[i]>k){
                    break;
                }
            }
           cout<<min(n, ls+rs)<<endl;
        return 0;
}


