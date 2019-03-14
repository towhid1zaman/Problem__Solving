#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string a,b;
        cin>>a>>b;
        int n;
        cin>>n;
          cout<<a<<" "<<b<<endl;
          for(int i = 0; i<n;i++){
            string m,r;
            cin>>m>>r;
            if(m==a){
                a=r;
            }else b = r;
            cout<<a<<" "<<b<<endl;
          }
     return 0;
}




