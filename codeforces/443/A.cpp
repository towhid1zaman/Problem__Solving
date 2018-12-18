#include<bits/stdc++.h>
using namespace std;

int main()
{
        set<int> x;
          string s;
          getline(cin,s);
           int len = s.size();
                for(int i = 0; i<len;i++)
                {
                    if(s[i] != '{' && s[i] != ',' &&  s[i] != '}' && s[i] !=' ')
                        {
                            x.insert(s[i]);
                        }
                }
                int sz = x.size();
                cout<<sz<<endl;

        return 0;
}


