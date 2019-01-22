#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
    int main()
    {
       ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);


        int n;
        int data[5] = {1,5,10,20,100};
          cin>>n;
        int ans  = 0;
                for(int i = 4; i>=0; i--)
                {
                    while(n>=data[i])
                    {
                        n-=data[i];
                        ans++;
                    }
                }
                cout<<ans;

                return 0;
    }
