#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int m;
    cin>>m;
       char mat[m][m];
       for(int i = 0; i<m;i++)
       {
           for(int j= 0; j<m;j++){
                cin>>mat[i][j];
           }
       }
       LL res = 0;
       for(int i = 1; i<m-1;i++)
       {
           for(int j= 1; j<m-1;j++){
                if(mat[i][j]=='X' and mat[i-1][j-1]=='X' and mat[i-1][j+1] =='X' and mat[i+1][j-1]=='X' and mat[i+1][j+1]=='X'){
                    res++;
                }
           }
       }

    cout<<res<<endl;

        return 0;
}
