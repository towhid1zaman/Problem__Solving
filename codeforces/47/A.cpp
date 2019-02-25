#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int T;
        cin>>T;

        for(int n = 1; n<=T;n++){
                int x = (n*(n+1))/2;
            if(x==T){
                cout<<"YES"<<endl;
                return 0;
            }
        }
        cout<<"NO"<<endl;



    return 0;
}



