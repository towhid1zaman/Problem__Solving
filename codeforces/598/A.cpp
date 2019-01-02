#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    LL t;
    cin>>t;
    LL x;
    LL sum;
    while(t--)
    {
        cin>>x;
        sum = (x*(x+1))/2; /// sum of all digit 1 to x
            for(int u = 1; u<=x; u*=2)
            {
                sum-=u*2;
            }
        cout<<sum<<endl;
    }


    return 0;
}
