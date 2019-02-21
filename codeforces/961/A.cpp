#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int>v(m);
    vector<int>cnt(n);
    for(int i  = 0; i < m; i++){
        cin>>v[i];
        cnt[ v[i] -1 ]++;
    }
    //sort(v.begin(),v.end());
    cout<<*min_element(cnt.begin(),cnt.end())<<endl;

    return 0;
}