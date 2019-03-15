#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int n;
        cin>>n;
        int check[n+5];
        memset(check,0,sizeof(check));
        for(int i = 2; i<=n;i+=2){
            check[i] = 1;
        }
        for(int i = 3; i<=n;i+=2){
            if(check[i]==0){
                for(int j = i;j<=n;j+=i){
                    check[j]++;
                }
            }
        }
        check[1] = 1;
        int res = 0;
        for(int i = 1; i<=n;i++)
        {
            if(check[i]==2)
            {
                res++;
            }
        }
        cout<<res<<endl;

     return 0;
}



