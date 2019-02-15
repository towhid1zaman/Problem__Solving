#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string s;
        vector<char>v;
        vector<char>v2;
        cin>>s;
        LL n = s.length();
        for(int i = 0; i<n;i++){
            v.push_back(s[i]);
        }
        reverse(v.begin(),v.end());
        for(int i = 0; i<n;i++){
            cout<<s[i];
        }
        for(int i = 0; i<n;i++){
            cout<<v[i];
        }
        cout<<endl;

        return 0;
}
