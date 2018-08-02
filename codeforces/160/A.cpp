#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>> t;
        int A[t+1];
        int s = 0;
            for(int i = 0; i<t ; i++)
                {
                    cin>>A[i];
                    s+=A[i];
                }

            sort(A, A+t);
            int s2=0;
            for(int i = t-1; i>=0;i--)
            {
                s2+=A[i];
                if(s2 >s-s2)
                {
                    cout<<t-i<<endl;
                   break;
                }
            }
    return 0;
}
