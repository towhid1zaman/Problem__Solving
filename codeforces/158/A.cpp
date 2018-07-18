#include<bits/stdc++.h>
#include<cstdio>

using namespace std;
int main()
{
   int n,k,add[50],most;
   cin>>n>>k;
        for(int i= 0;i<n;i++)
        {
            cin>>add[i];
                if(i+1==k)
                {
                    most=add[i];
                }
        }
        int c = 0;

        for(int i = 0 ;i<n;i++)
        {
            if(add[i]>=most && add[i]>0)
            {
                c++;
            }
        }

        cout<<c<<endl;

        return 0;

}
