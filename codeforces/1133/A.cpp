#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
template <typename T>
string to_str(T str)
{
    stringstream stream;
    stream << str;
    return stream.str();
}

int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int A,B;
        char ch1,ch2;
        int x,y;
        cin>>A>>ch1>>B;
        cin>>x>>ch2>>y;

        int r1 = (A*60)+ B;
        int r2 = (x*60) + y;
        int ans  = (r1 + r2) / 2;
        int h = ans/60;
        int m = ans%60;
        string HHH = to_str(h);
        string MMM = to_str(m);
        if(HHH.size()==1 and MMM.size()==1){
            cout<<"0"<<h<<":"<<"0"<<m<<endl;
        }
        else if(HHH.size()==1 and MMM.size() !=1){
            cout<<"0"<<h<<":"<<m<<endl;
        }
         else if(HHH.size() !=1 and MMM.size() ==1){
            cout<<h<<":"<<"0"<<m<<endl;
        }
        else cout<<h<<":"<<m<<endl;

    return 0;
}
