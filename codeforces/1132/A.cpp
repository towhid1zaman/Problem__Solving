#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a != d){
        cout<<0<<endl;
        return 0;
    }
    else if(c>0 and a ==0){
        cout<<0<<endl;
        return 0;
    }
    else
        cout<<1<<endl;

    return 0;
}