#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int an[101];
    cin>>n;

            int k;
            for(int i = 1; i<=n;i++)
            {
                cin>>k;
                    an[k] = i;
            }
                for(int i = 1; i<=n; i++)
                {
                    cout<<an[i] <<" ";
                }
                return 0;

}
