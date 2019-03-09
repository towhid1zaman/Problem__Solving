#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int n;
    cin>>n;
    int a= 0; int b = 0;
        for(int i = 0; i<n;i++){
            int x, y;
            cin>>x>>y;
                if(x<0)a++;
                else b++;
        }
            if(a<=1 or b<=1 ){
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;

            return 0;
}
