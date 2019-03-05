#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    LL n;
    cin>>n;
    vector<LL>v(n);
    LL  sum = 0;
    for(LL i = 0; i<n;i++){
        cin>>v[i];
        sum+=v[i];
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    LL m;
    cin>>m;
    vector<LL>vm(m);
    for(LL i  = 0; i<m;i++){
        cin>>vm[i];
        cout<<sum - v[ vm[i] -1]<<endl;
    }
    return 0;
}
