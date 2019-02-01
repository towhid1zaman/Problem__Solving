#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        LL n;
        cin>>n;
        vector<LL>v(n);
            for(LL i = 0; i<n;i++){
                    cin>>v[i];
            }
            sort(v.begin(),v.end());
            bool f = false;
                    for(LL i = 0; i<n-2;i++){
                        if(v[i] + v[i+1] > v[i+2]){
                            f = true;
                            break;
                        }
                    }
                    if(f) cout<<"YES"<<endl;
                    else cout<<"NO"<<endl;
        return 0;
}
