#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        string s;
        cin>>s;
        LL len = s.length();
        LL sum = 0;
        for(int i = len-1; i>=0;i--){
            if(s[i]=='4'){
                sum+=pow(2,len-1-i);
            }
            else{
                sum+=2*pow(2,len-1-i);
            }
        }
        cout<<sum<<endl;
        return 0;
}

