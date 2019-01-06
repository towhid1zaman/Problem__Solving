#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int k,r;
    cin>>k>>r;
        int sum = 0;
    int cnt= 0;
        while(true)
        {
            sum+=k;
               int v = sum - r;
            cnt++;
                if(sum%10==0)
                {
                    break;
                }
                  else  if(v%10==0)
                    {
                        break;
                    }
        }
        cout<<cnt<<endl;
        return 0;
}
