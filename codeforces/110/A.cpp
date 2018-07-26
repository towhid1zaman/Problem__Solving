#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
        int len = s.length();
        int f = 0;
     for(int i=0;i<len;i++)
            {
                if(s[i]=='4' || s[i]=='7')
                    f++;
            }
            if(f==4 || f==7)
                {
                    cout<<"YES"<<endl;
                }
            else
                {
                    cout<<"NO"<<endl;
                }

    return 0;
}
