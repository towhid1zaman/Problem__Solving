#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,s1=0,s2=0,s3=0;
        cin>>t;
        int a[t+1],b[t+1],c[t+1];
            for(int i = 0;i<t;i++)
            {
                cin>>a[i]>>b[i]>>c[i];
                s1+=a[i];
                s2+=b[i];
                s3+=c[i];
            }
            if(s1==0 and s2==0 and s3==0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

            return 0;

}
