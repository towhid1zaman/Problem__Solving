#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int a;
    cin>>a;
        int L1,R1,L2,R2;
            for(int i = 0; i<a; i++)
            {
                cin>>L1>>R1>>L2>>R2;
                if( (L1+1) != (R2-1))
                {
                    cout<<L1+1 << " "<<R2-1<<endl;
                }
                else
                    cout<<L1 << " "<<R2-1<<endl;

            }
            return 0;
}
