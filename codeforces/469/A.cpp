#include<bits/stdc++.h>
using namespace std;
int main()
{
            int t;
            cin>>t;
            set <int> s;
            int a;
            cin>>a;
            for(int i = 0;i<a;i++)
            {
                int b;
                cin>>b;
                s.insert(b);
            }

            int c;
            cin>>c;
            for(int j = 0; j<c;j++)
            {
                int d;
                cin>>d;
                s.insert(d);
            }

            if(t==s.size())
            {
                cout<<"I become the guy."<<endl;
            }
            else
                cout<<"Oh, my keyboard!"<<endl;


return 0;


}
