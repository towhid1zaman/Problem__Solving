#include<bits/stdc++.h>
#include<string>

using namespace std;

int main()
{

    string s1;
    string s2;
                    cin>>s1>>s2;
                for(int i = 0; i<s1.length();i++)
            {
                    s1[i]=tolower(s1[i]);
                    s2[i]=tolower(s2[i]);
            }
            if(s1==s2)
                cout<<"0"<<endl;
                else
                {
                    for(int i = 0; i<s1.length();i++)
                    {
                        if(s1[i]<s2[i])
                        {
                            cout<<"-1"<<endl;
                            break;
                        }
                        if(s1[i]>s2[i])
                        {
                            cout<<"1"<<endl;
                            break;
                        }
                    }
                }

            return 0;
}
