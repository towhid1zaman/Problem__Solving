#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    LL n,k;
    cin>>n>>k;
         LL multi =-1;
        vector<LL> v;
            for(int i = 2; i<=n;)
            {
                if(v.size()==k-1)
                {
                    v.push_back(n);
                    break;
                }
                if(n%i==0)
                {
                    v.push_back(i);
                    n/=i;
                }
                else i++;
            }
                if(v.size()==k)
                {
                    for(int i= 0; i<v.size();i++)
                    {
                        cout<<v[i]<<" ";
                    }
                }
                else
                    cout<<multi<<endl;
        }
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
        return 0;
}



