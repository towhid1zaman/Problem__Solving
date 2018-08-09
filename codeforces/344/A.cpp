#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);

      int n, t,ans=1,prev;
          cin>>n;
          cin>>prev;

          for(int i=1;i<n;i++){
            cin>>t;
            if(t == prev){
              continue;
            }
            else {
              prev = t;
              ans++;
            }
          }
          cout<<ans<<endl;

}
