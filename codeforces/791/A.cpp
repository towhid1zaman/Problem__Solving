#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    ll a,b;
    cin>>a>>b;
    ll counter = 0;
    while(1)
    {
        a=a*3;
        b=b*2;
        counter++;
        if(a>b)
            break;
    }
    cout<<counter<<endl;


    return 0;
}
