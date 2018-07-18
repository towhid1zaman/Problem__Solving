
#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100];
    int n, ans=0;
    cin>>n;
    while(n--)
    {
            cin>>s;
            if(s[1]=='+')
                ans++;
            if(s[1]=='-')
                ans--;
    }
    cout<<ans;

}
