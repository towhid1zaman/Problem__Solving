#include "bits/stdc++.h"
using namespace std;
typedef long long LL;
bool f(int x, int y)
{
    return x>y;
}
int main()
{
       int  n;
       cin>>n;
        vector<pair<int,int> >v;
            for(int i = 0; i<n;i++)
            {
                    int x;
                    cin>>x;
                    v.push_back({x,i+1});
            }
            sort(v.begin(),v.end());
            int k = 0;
            int m = n-1;
                for(int i = 0; i<n/2;i++)
                {
                    cout<<v[k].second<<" "<<v[m].second<<endl;
                    k+=1;
                    m-=1;
                }


        return 0;
}

