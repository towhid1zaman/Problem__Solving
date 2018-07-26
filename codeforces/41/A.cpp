#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    string st;
    cin>>s;
    cin>>st;
            string rv = string (s.rbegin(),s.rend());

           if(st==rv)cout<<"YES"<<endl;
           else cout<<"NO"<<endl;

            return 0;

}
