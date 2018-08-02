#include<bits/stdc++.h>
using namespace std;
        string StringToUpper(string strToConvert)
        {
            std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::toupper);
                cout<<strToConvert;
        }

        string StringToLower(string strToConvert)
        {
            std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);
                cout<<strToConvert;
        }
int main()
{
    string str;
        cin>>str;
            int len = str.length();
                int l = 0; int u = 0;
                for(int i = 0; i<len ; i++)
                {
                    if(str.at(i)>='A' and str.at(i)<='Z')
                    {
                        u++;
                    }
                     if(str.at(i)>='a' and str.at(i)<='z')
                    {
                        l++;
                    }
                }
                if(u<=l)
                {
                    StringToLower(str);
                }
                else{
                    StringToUpper(str);
                }

                return  0;
}
