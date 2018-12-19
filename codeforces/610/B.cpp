#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    ll i,n,k,flag,mini,maxi,v[400015];
    cin>>n;
            //vector<ll>v(n);
                mini = 99999999999;
                        for(i = 0; i<n;i++)
                        {
                                    cin>>v[i];
                                mini = min(v[i],mini);
                        }
                        //ll s = v.size();
                        for( i = n; i<2*n;i++)
                        {
                            v[i] = v[i-n];
                        }

                        for(i = 0; i<n*2;i++)
                        {
                            if(v[i] == mini)
                            {
                                maxi = max( i-flag-1,maxi);
                                 flag = i;
                            }
                        }
                        cout<< (n*mini) +maxi<<endl;
                        //cout<<r-1<<endl;
                        //cout<<r<<endl;
            return 0;

}
