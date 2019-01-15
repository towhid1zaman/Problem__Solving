#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
    int n,m;
    cin>>n>>m;
        int a=0,b=0,c=0;
            for(int i = 1; i<7; i++)
            {
                if(abs(n-i)<abs(m-i))a++;
                if(abs(n-i)>abs(m-i))b++;
                if(abs(n-i)==abs(m-i))c++;
            }
            cout<<a<<" "<<c<<" "<<b<<endl;

            return 0;

}
