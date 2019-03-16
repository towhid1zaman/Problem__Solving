#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

      int n;
      cin>>n;
      vector<int>v(n);
      vector<int>ans;
      int _1 = 0;
      int _0 = 0;
      for(int i = 0; i<n;i++){
        cin>>v[i];
        if(v[i]==1){
                _1++;
                ans.push_back(i);
        }
        else _0++;
      }
      //cout<<_1<<" "<<_0<<endl;
      if(_0==n){
            cout<<0<<endl;
      return 0;
      }
      if(_1==1){
            cout<<"1"<<endl;
            return 0;
      }
      else{
            LL sum = 1;
                for(LL i = 1; i<ans.size();i++){
                    sum*=ans[i]-ans[i-1];
                }
      cout<<sum<<endl;
      }

     return 0;
}



