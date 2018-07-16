#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

            long long int a;
            for(int i=0;i<n;i++)
            {
                cin>>a;

                    if(a%2==0)
                    {
                        cout<<a-1<<" ";
                    }
                    else
                        cout<<a<<" ";
            }
            cout<<endl;

            return 0;
}