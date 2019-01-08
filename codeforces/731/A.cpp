#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    string s;
        cin>>s;
        int len = s.length();
        int  sum = min(abs('a'-s[0]),26 - abs(s[0]-'a'));
            for(int i = 1; i<len;i++)
            {

                sum+= min(abs(s[i-1]-s[i]),26 - abs(s[i-1]-s[i]) );
            }
            cout<<sum<<endl;

            return 0;
}
