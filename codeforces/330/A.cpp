#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int r,c;
            cin>>r>>c;
            char cake[20][20];
            int row[20],col[20],res[20][20];
            memset(row,0,sizeof(row));
            memset(col,0,sizeof(col));
            memset(res,0,sizeof(res));
            for(int i = 1; i<=r; i++)
            {
                for(int j = 1; j<=c;j++)
                {
                    cin>>cake[i][j];
                    if(cake[i][j]=='S')
                    {
                        row[i] = 1;
                        col[j]  = 1;
                    }
                }
            }
            for(int i = 1; i<=r;i++)
            {
                if(row[i]==0)
                {
                    for(int j =1; j<=c;j++)
                    {
                        res[i][j] = 1;
                    }
                }
            }
            for(int i = 1;i<=c;i++){
                if(col[i]==0)
                {
                    for(int j = 1; j<=r;j++){
                        res[j][i] = 1;
                    }
                }
            }
//            for(int i = 1; i<=r;i++)
//            {
//                for(int j = 1; j<=c;j++)
//                {
//                    cout<<res[i][j];
//                }
//                cout<<endl;
//            }
                int ans = 0;
                for(int i = 1; i <=r; i++)
                {
                    for(int j = 1; j<=c;j++)
                    {
                        if(res[i][j])ans++;
                    }
                }
                cout<<ans<<endl;
     return 0;
}



