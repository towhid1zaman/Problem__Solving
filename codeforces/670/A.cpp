#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
            int n;
            cin>>n;
            int a=0,b=0;
            for(int i = 0; i<n;i++){
                    if(i%7==5 or i%7==6)a++;
                    if(i%7==1 or i%7==0)b++;
            }
            cout<<a<<" "<<b<<endl;



        return 0;
}
