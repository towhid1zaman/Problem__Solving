#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a;
    string s;
        cin>>n;
                int sum  = 0;
            for(int i = 0; i<n; i++)
            {
                cin>>s;
                    if(s.at(0)=='T'){a=4;}
                    if(s.at(0)=='I'){a=20;}
                    if(s.at(0)=='C'){a=6;}
                    if(s.at(0)=='D'){a=12;}
                    if(s.at(0)=='O'){a=8;}

                    sum = sum + a;
            }
            cout<<sum;
            
            return 0;
}
