#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int len = s.length();
    int x = 0, y = 0;

    string h="hello";
            for(int i = 0; i<len; i++)
            {
                if(s[i] == h[x])
                {
                    x++;
                    y++;
                }
            }
            if(x==5)
            {
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

            return 0 ;
}
