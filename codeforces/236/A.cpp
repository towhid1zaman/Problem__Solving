#include<bits/stdc++.h>
using namespace std;

int main()
{
        char str[1000];
        set<char>sv ;
        set<char> :: iterator svi;
        cin>>str;
        int l = strlen(str);
            for(int i = 0;i<l;i++)
            {
                sv.insert(str[i]);
            }

            int cou=0;
            for(svi=sv.begin();svi!=sv.end();svi++)
            {
                cou++;
            }
                        if(cou%2==0)
                        {
                            cout<<"CHAT WITH HER!"<<endl;
                        }
                            else
                                cout<<"IGNORE HIM!"<<endl;
        return 0;
}
