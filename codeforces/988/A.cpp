#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int a[101];
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);


        int n,k;
        cin>>n>>k;
         map<int,int>mp;
         vector<int>v;
            for(int i = 0; i<n;i++)
            {
                int x;
                cin>>x;
                    if(mp[x]==0)
                    {
                          v.push_back(i+1);
                           mp[x] = 1;
                    }

            }
                if(v.size()<k) cout<<"NO"<<endl;
                else
                {
                    cout<<"YES"<<endl;
                        for(int i = 0; i<k;i++)
                        {
                            cout<<v[i]<<" ";
                        }
                        cout<<endl;
                }


        return 0;
}

