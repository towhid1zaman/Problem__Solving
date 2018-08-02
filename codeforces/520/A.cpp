#include<bits/stdc++.h>
using namespace std;


    bool word(string s)
    {
        vector<bool> checked(255, false);
        for (int i=0; i < int(s.size()); i++)
            checked[s[i]] = true;
        for (int i='a'; i <= 'z'; i++)
            if (!checked[i])
                return false;
        return true;
    }

    string StringToLower(string strToConvert)
        {
            std::transform(strToConvert.begin(), strToConvert.end(), strToConvert.begin(), ::tolower);
                return strToConvert;
        }
int main()
{
    int n;
        string str;

        cin>>n;
        cin>>str;
                if(word(StringToLower(str))==1)
                {
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
    return 0;
}
