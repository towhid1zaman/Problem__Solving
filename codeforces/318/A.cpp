#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n , k;
    cin>>n>>k;

          long long int s,a;
                if(n%2==0)
                    {
                        s=n/2;
                    }
                else
                    {
                        s=(n/2)+1;
                    }
                        if(k<=s)
                            {
                                a = (k*2)-1;
                            }
                        else
                            {
                                a = (k-s)*2;
                            }

        cout<<a;


            return 0;
}
