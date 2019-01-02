#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    LL t;
        cin>>t;
        LL s,a,b,c;
            for(LL i = 0; i<t;i++)
            {
                cin>>s>>a>>b>>c;
                 LL sum = ((s/c)/a)*b + (s/c);
                    cout<<sum<<endl;
            }
    return 0;
}


