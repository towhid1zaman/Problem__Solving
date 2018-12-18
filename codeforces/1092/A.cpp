#include<bits/stdc++.h>
using namespace std;

int main()
{
       int n;
       cin>>n;
        int a, b;
            while(n--)
            {
                cin>>a>>b;
                string s="";
                        for(int i = 0; i<a;i++)
                        {
                            s+=char('a'  +  (i%b));
                        }
                        cout<<s<<"\n";
            }





        return 0;
}
