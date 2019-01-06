#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int x;
    cin>>x;
    string s[x];
        for(int i = 0; i<x;i++)
        {
            cin>>s[i];
        }
            int flag = 0;
                for(int i = 0; i<x;i++)
                {
                        if(s[i][0]=='O' && s[i][1]=='O')
                        {
                            flag = 1;
                            s[i][0] = '+';
                            s[i][1] = '+';
                            break;
                        }
                        if(s[i][3]=='O' && s[i][4]=='O')
                        {
                            flag = 2;
                            s[i][3] = '+';
                            s[i][4] = '+';
                            break;
                        }
                }
                    if(flag==0)
                    {
                        cout<<"NO"<<endl;
                        return 0 ;
                    }
                    else
                        cout<<"YES"<<endl;
                        for(int i = 0; i<x;i++)
                        {
                            cout<<s[i]<<endl;
                        }
                            return 0 ;
}
