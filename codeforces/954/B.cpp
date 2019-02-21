#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin>>n>>s;
    int res = n;
    for(int i = 1; i<=n/2;i++){
        string left = string(s.begin(),s.begin()+i);
        string right = string(s.begin()+i,s.begin()+ 2*i);
        if(left==right) res = n-i+1;
    }
    cout<<res<<endl;


    return 0;
}