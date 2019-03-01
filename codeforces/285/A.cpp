#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        LL n;
        LL k;
        cin>>n>>k;
      if(k==0){
        for(int i = 1; i<=n;i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
      }
      else{
        for(int i = 0;i<k;i++){
            cout<<n-i<<" ";
        }
        for(int i = 1; i<=n-k;i++){
            cout<<i<<" ";
        }cout<<endl;
      }
    return 0;
}


