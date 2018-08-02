#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string s;
        cin>>n;
        cin>>s;
        int len = s.length();
            int d=0,a=0;
            for(int i = 0; i<len ; i++)
            {
                if(s.at(i)=='A')
                {
                    a++;
                }
                if(s.at(i)=='D')
                {
                    d++;
                }
            }
            if(a>d)
            {
                cout<<"Anton"<<endl;
            }
            if(a<d)
            {
                cout<<"Danik"<<endl;
            }
            if(a==d){
                cout<<"Friendship"<<endl;
            }

            return 0;
}
