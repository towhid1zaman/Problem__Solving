#include<bits/stdc++.h>
using namespace std;
#define I cin
#define O cout
int main()
{
       vector<int> s;
       int n,maax = 0, miin = 101, maxindex = 0, minindex = 0,m,x,y;
       I>>n;
            for(int i = 0;i<n;i++)
            {
                I>>m;
                s.push_back(m);
            }
                for(int i = 0; i<n; i++)
                {
                    if(s[i]>maax)
                    {
                        maax = s[i];
                        maxindex = i;
                        x = maxindex;
                    }
                    if(s[i]<=miin)
                    {
                        miin = s[i];
                        minindex = i;
                        y = n - 1 - minindex;
                    }
                }
                if(maxindex>minindex)
                {
                    O<<x+y-1;
                }
                else
                    O<<x+y;


        return 0;
}
