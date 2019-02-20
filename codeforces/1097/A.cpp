#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string m;
        cin>>m;
        string s1,s2,s3,s4,s5;
        cin>>s1>>s2>>s3>>s4>>s5;
        bool f = false;

        if(m[0]==s1[0] or m[1]==s1[1] or m[0]==s2[0] or m[1]==s2[1] or m[0]==s3[0] or m[1]==s3[1] or m[0]==s4[0] or m[1]==s4[1] or m[0]==s5[0] or m[1]==s5[1]){
            f = true;
        }
        if(f){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

        return 0;
}

