#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
        int len = str.length();

        for(int i = 0; i<len;i++)
        {
            if(str[i]=='H' or str[i]=='Q' or str[i]=='9')
            {
                cout<<"YES"<<endl;
                return 0;
            }
        }cout<<"NO"<<endl;


 return 0;
}
