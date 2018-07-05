#include<bits/stdc++.h>
using namespace std;

void op(string s)
{
    int l = s.length();

    if(l>10)
        cout<<s[0]<<l-2<<s[l-1]<<endl;

    else
        cout<<s<<endl;

    return;
}
int main()
{
    int n;
    cin>>n;
    string s;
        for(int i=0;i < n;i++)
        {
            cin>>s;
            op(s);
        }
        return 0;

}
