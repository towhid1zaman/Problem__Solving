#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string s;
        vector<int>v;
        cin>>s;
        int len = s.length();
        for(int i = 0; i<len;i++){
            if(s[i]=='.'){
                v.push_back(0);
                s[i]='0';
            }
            else if(s[i]=='-' and s[i+1]=='.'){
                v.push_back(1);
                s[i]='1';
                s[i+1] = '1';
            }
            else if(s[i]=='-'  and s[i+1]=='-'){
                v.push_back(2);
                s[i]='2';
                s[i+1]='2';
            }
        }
        for(int i = 0; i<v.size();i++){
            cout<<v[i];
        }
        cout<<endl;

        return 0;
 }
