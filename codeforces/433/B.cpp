#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int n;
      cin>>n;
      vector<LL>v;
      vector<LL>u;
      v.push_back(0);
      u.push_back(0);
      for(int i = 0; i<n;i++){
        LL x;
        cin>>x;
        v.push_back(x);
        u.push_back(x);
      }
      //cout<<endl;
//      for(int i = 0; i<v.size();i++){
//        cout<<v[i]<<endl;
//      }

      sort(u.begin(),u.end());
      for(int i = 1; i<n+1;i++){
        v[i] = v[i-1] + v[i];
       // cout<<v[i]<<" ";
        u[i] +=u[i-1];
        //cout<<u[i]<<" ";
      }
      //cout<<endl<<endl;
    int t,l,r;
    int m;cin>>m;
    for(int i = 0; i<m; i++){
        cin>>t>>l>>r;
        if(t==1){
            cout<<v[r] - v[l-1]<<endl;;
        }
        else if(t==2){
            cout<<u[r] - u[l-1]<<endl;
        }
    }


     return 0;
}
