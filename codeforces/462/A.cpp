#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    int n;
    cin>>n;
    //string s[n];
    string s,s1,s2;
    int res = 0;
//    vector<string> s;
        for(int i = 0; i<n;i++)
        {
            cin>>s;
                    s1+=s;
        }
        s2 = s1;
        reverse(s2.begin(), s2.end());
        if(s2!=s1)
                {
                    cout<<"NO"<<endl;
                }
                else
                    cout<<"YES"<<endl;
}
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t;
    t= 1;
//    cin>>t;
    while(t--)
    {
        solve();
    }
        return 0;
}



