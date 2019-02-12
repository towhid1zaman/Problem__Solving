#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){

        LL b,k;
        cin>>b>>k;
        vector<LL>v(k);
            for(int i = 0; i<k;i++){
                cin>>v[i];
            }
            LL sum = 0;
            int p = 1;
                for(int i = k-1; i>=0;i--){
                    sum = (sum+v[i]*p)%2;
                    p = (p*b) %2;
                }
                if(sum==0){
                    puts("EVEN");
                }
                else
                puts("ODD");

        return 0 ;
}
