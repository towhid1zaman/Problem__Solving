#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        LL a,b,c,s1,s2,s3;
        cin>>s1>>s2>>s3;
            a = sqrt((s1*s3)/s2);
            b = sqrt((s1*s2)/s3);
            c = sqrt((s3*s2)/s1);
            //cout<<a<<" "<<b<<" "<<c<<endl;

            LL sum = a+b+c;
                cout<<4*sum<<endl;

    return 0;
}

