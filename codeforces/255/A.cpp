#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n;
        cin>>n;
        int x;
        //map<int,int>mp;
        vector<int>v(2);
        for(int i = 0; i<n;i++)
        {
            cin>>x;
                v[ (i%3) ]+=x;
        }
        if(v[0]> v[1] and v[0]>v[2])
        {
            puts("chest");
        }
        else if(v[1]>v[2])
        {
            puts("biceps");
        }
        else
            puts("back");

    return 0;
}

