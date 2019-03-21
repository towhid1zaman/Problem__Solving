#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int v[1000005];
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int n,m;
            cin>>n>>m;
            //vector<int>v;

            memset(v,0,sizeof(v));
            for(int i  = 0; i<m;i++){
                int x,y;
                cin>>x>>y;
                v[x] = 1;
                v[y] = 1;
            }
            int star;
            for(int i = 1; i<=n;i++){
                if( !v[i]){
                    star = i;
                    break;
                }
            }
            cout<<n-1<<endl;
            for(int i = 1; i<=n;i++)
            {
                if(star==i)continue;
                else
                    cout<<star<<" "<<i<<endl;
            }

     return 0;
}
