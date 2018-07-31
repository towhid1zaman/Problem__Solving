#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
            cin>>n;
            int w, x;
                     int sum1 = 0;
                for(int i = 0; i<n;i++)
                {
                    cin>>w;

                    sum1 = sum1 +w;
                }

                 int sum2 = 0;
                for(int j = 0; j<n;j++)
                {
                    cin>>x;
                    sum2 = sum2+x;
                }

                if(sum1>=sum2)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;


                return 0;
}
