#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{

        LL t;
        cin>>t;
        vector<LL>v(t);
        for(int i = 0; i<t;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        LL x = t-1;
        LL sum = 0;
        for(int i =0; i<t/2;i++){
            sum+= (v[i]+v[x])* (v[i]+v[x]);
                x--;
        }
        cout<<sum<<endl;
        return 0;
}