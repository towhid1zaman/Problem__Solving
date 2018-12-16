#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
      cin>>n;
        int an[n];
        int bn[n];

                    for(int i = 0; i<n; i++)
                    {
                        cin>>an[i];
                    }
                        for(int i = 0; i<n; i++)
                        {
                            bn[an[i] - 1] = i+1;
                        }
                        for(int i = 0;i<n;i++)
                        {
                            cout<<bn[i]<<" ";
                        }
                        cout<<endl;

        return 0;
}
