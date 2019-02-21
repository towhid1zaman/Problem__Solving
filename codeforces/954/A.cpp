#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n;
    string s;
    cin>>n>>s;
    vector<char>v;
        for(int i = 0; i<n;){
            if((s[i]=='U' and s[i+1]=='R') || (s[i]=='R' and s[i+1]=='U')){
                v.push_back('d');
                i+=2;
            }
            else{
                v.push_back(s[i]);
                i+=1;
            }
        }
        cout<<v.size()<<endl;

        return 0;
}



