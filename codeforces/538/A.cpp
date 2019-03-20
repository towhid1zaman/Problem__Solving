#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

          string cf = "CODEFORCES";
          int cl = cf.length();

          string s;
          cin>>s;
          int n = s.length();

           if(n<cl){
            cout<<"NO"<<endl;
            return 0;

           }
           for(int i = 0;i<11;i++){
            string a = s.substr(0,i);
            string b = s.substr(n-(10-i),10-i);
            if(a+b==cf){
                cout<<"YES"<<endl;
                return 0;
            }
           }
           cout<<"NO"<<endl;

        return 0;
}





