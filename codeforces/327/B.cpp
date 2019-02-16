#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
  int a[10000005];
  vector<int>p;
    void p_seive(){
                a[0]=a[1] = 1;
                for(int i = 2; i*i<=10000000;i++){
                    if(a[i]==0){
                        for(int j=2*i;j<=10000000;j+=i){
                            a[j] = 1;
                        }
                    }
                }
                    for(int i = 2; i<=10000000;i++){
                        if(a[i]==0){
                            p.push_back(i);
                        }
                    }
    }

int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
       p_seive();
       int n;
       cin>>n;
       for(int i  = 0; i<n;i++){
        cout<<p[i]<<" ";
       }
       cout<<endl;
        return 0;
}


