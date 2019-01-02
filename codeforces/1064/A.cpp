#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define endl "\n"
int main()
{
    vector<int>v(3);
    for(int i = 0;i<3;i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(v[2]>=v[1]+v[0])cout<<v[2] - v[1] - v[0] +1 <<endl;
    else puts("0");

    return 0;
}
