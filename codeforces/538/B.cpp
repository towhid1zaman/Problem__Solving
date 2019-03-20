#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            string s;
            cin>>s;
            int n = s.length();
            int res = 0;
            for(int i = 0; i<n; i++){
                    //cout<<res<<endl;
                res = max(res, (int)(s[i]-'0'));
            }
            //cout<<endl;
            cout<<res<<endl;
            while(res--)
            {
                bool f = false;
                for(int i = 0; i<n;i++)
                {
                    if(s[i]=='0')
                    {
                        if(f==true)
                            cout<<0;
                    }
                    else
                    {
                        f = true;
                        cout<<1;
                        //cout<<endl<<"before -ve "<<s[i]<<endl;
                        s[i]--;
                        //cout<<"after -ve "<<s[i]<<endl;
                    }
                }
                cout<<" ";
            }
            cout<<endl;

        return 0;
}




