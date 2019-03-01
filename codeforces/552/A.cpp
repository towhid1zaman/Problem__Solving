#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
 int table[100][100];
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;

          int x1,y1,x2,y2;
            while(n--){
                cin>>x1>>y1>>x2>>y2;
                x1--;
                x2--;
                y1--;
                y2--;
                for(int i = x1; i<=x2;i++){
                    for(int j = y1; j<=y2;j++){
                        table[i][j] ++;
                    }
                }

            } int res = 0;
                    for(int i = 0; i<100;i++){
                        for(int j = 0; j<100;j++){
                            res+=table[i][j];
                        }
                    }
                    cout<<res<<endl;




    return 0;
}



