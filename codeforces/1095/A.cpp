
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,x=0;
    string t;
    cin>>n>>t;
    for(int i = 0 ; i<n ;i+=x)
    {
        cout<<t[i];
        x++;
    }
    cout<<endl;

    return 0;
}