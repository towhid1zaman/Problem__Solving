#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t;
    cin>>n>>t;
    vector<int>v(n);
        for(int i = 1; i<n;i++)
        {
            cin>>v[i];
        }
        int flag = 1;
            while(flag<t)
            {
                flag+=v[flag];
            }
            if(flag==t)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;

            return 0;

}
