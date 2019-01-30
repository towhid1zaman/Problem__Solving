#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{        string s;
        int flag=1;
        cin>>s;
        for(int i=0;i<s.length();)
        {
            if(s[i]=='1' && s[i+1]=='4'  && s[i+2]=='4')
            {
                i+=3;
            }

            else if(s[i]=='1' && s[i+1]=='4')
            {
                i+=2;
            }

            else if(s[i]=='1')
            {
                i++;
            }

            else
            {
                flag=0;
                break;
            }
        }

        if(flag==1)
            cout<<"YES";
        else
            cout<<"NO";

}

int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--)
    {
        solve();
    }

        return 0;
}


