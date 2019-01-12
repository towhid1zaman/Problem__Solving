#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int n;
    cin>>n;
    int x;
    vector<int>v(n);
    for(int i = 0; i<n;i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    if(v.size()==1) cout<<"NO"<<endl;
    else
        cout<<v[1]<<endl;

                        return 0;
}
