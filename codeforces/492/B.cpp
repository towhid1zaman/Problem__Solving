#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){
            ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

            LL n,l;
            cin>>n>>l;
            vector<LL>v(n);
            for(int i = 0; i<n;i++)
            {
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            LL res  = max(v[0],l-v[n-1]);
            res*=2;
            for(int i = 0; i<n-1;i++){
                res = max(res, v[i+1] - v[i]);
            }
            printf("%.10f\n",res/2.);

           return 0 ;
}

