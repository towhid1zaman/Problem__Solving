#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
int Light[10][10];
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

            for(int i = 1; i<=3;i++){
                for(int j = 1; j<=3;j++){
                    cin>>Light[i][j];
                }
            }

            for(int i = 1; i<=3; i++,cout<<"\n"){
                for(int j = 1; j<=3;j++){
                        cout<<(Light[i][j]+Light[i-1][j]+Light[i+1][j]+Light[i][j-1]+Light[i][j+1]+1)%2;
                }
            }


     return 0;
}
