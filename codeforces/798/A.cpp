#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);

       string s;
       cin>>s;
                int v=0;
                int i,j;
                for(i=0,j=(s.size()-1);i<j;i++,j--)
                            {
                                if(s[i]!=s[j])v++;
                            }
                if(v==1) cout<<"YES\n";
                else
                {
                if(v>1) cout<<"NO\n";
                    else
                    {
                        if(s.size()%2==0) cout<<"NO\n";
                     else cout<<"YES\n";
                    }
                }

	return 0;
}
