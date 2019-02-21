#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int n;
            string s;
            cin>>n>>s;
            //vector<int>d;
            for(int i = 1; i<=n;i++){
                if(n%i==0){
                   reverse(s.begin(),s.begin()+i);
                }
            }
            cout<<s<<endl;

        return 0;
}
