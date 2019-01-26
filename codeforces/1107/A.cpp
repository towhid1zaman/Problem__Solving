#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
   int t;
   cin>>t;
   int k;
   string s;
    for(int i = 0; i<t;i++)
    {
        cin>>k;
        cin>>s;
        int len = s.length();
        if(len==2)
        {
            if((s[0]-'0') < (s[1]-'0'))
            {
                cout<<"YES"<<endl;
                cout<<"2"<<endl;
                cout<<s[0]<<" "<<s[1]<<endl;
            }
            else
                cout<<"NO"<<endl;

        }
        else if(len>2)
        {
            cout<<"YES"<<endl;
            cout<<"2"<<endl;
            cout<<s[0]<<" ";
                for(int i = 1; i<len; i++)
                {
                    cout<<s[i];
                }
                cout<<endl;
        }
    }

}
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    t= 1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
        return 0;
}


