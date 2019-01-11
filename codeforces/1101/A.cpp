#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int Q;
    cin>>Q;
                LL l,r,d;
                    while(Q--)
                    {
                        cin>>l>>r>>d;
                        if(d<l) cout<<d<<endl;
                        else
                        {
                            LL ans = d*((r/d)+1);
                            cout<<ans<<endl;
                        }
                    }

        return 0;
}