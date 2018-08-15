#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        ll n;
        cin>>n;
//        if(n==1) cout<<"I hate it" <<endl;
//        if(n==2) cout<< "I hate that I love it"<<endl;
//        if(n==3) cout<<"I hate that I love that I hate it"<<endl;
            for(ll i=0;i<n;i++)
                {
                    if(i%2==0)
                        cout << "I hate ";
                    else
                        cout << "I love ";
                    if(i==n-1)
                        cout << "it ";
                    else
                        cout << "that ";
                }
    return 0;
}

