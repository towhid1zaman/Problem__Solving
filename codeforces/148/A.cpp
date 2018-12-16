#include<bits/stdc++.h>
using namespace std;
#define I cin
#define O cout
int main()
{
    int k,l,m,n;
    long long d;
        I>>k>>l>>m>>n;
        I>>d;
        int cnt = 0;
            for(int i = 1;i<=d;i++)
            {
                if(i%k == 0 or i%l==0 or i%m==0 or i%n==0)
                {
                    cnt++;
                }
            }
            O<<cnt<<endl;


        return 0;
}
