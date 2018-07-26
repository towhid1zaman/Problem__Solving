#include<bits/stdc++.h>
using namespace std;

int main()
{
    string(str);
    cin>>str;
    int len=str.length();
        int l = 0;

            for(int i = 1; i<len ; i++)
            {
                if(str[i]>=65 and str[i]<=90)
                {
                    l++;
                }
            }

            if(l==len-1)
            {
                for(int i=0; i<len; i++)
                        {
                            if(str[i]>=65 and str[i]<=90)
                                        {
                                            str[i]=str[i]+32;
                                        }
                            else if(str[i]>=97 and str[i]<=122)
                                        {
                                            str[i]=str[i]-32;
                                        }
                        }
            }
            cout<<str<<endl;

            return 0;

}
