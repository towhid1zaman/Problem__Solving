#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

void solve()
{
    string s;
    cin>>s;
    int n = s.length();
            bool flag = false;
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == 'A' && s[i + 1] == 'B') {
                    for (int j = i + 2; j < n - 1; j++) {
                        if (s[j] == 'B' && s[j + 1] == 'A') {
                            flag = true;
                        }
                    }
                    break;
                }
            }
            for (int i = 0; i < n - 1; i++) {
                if (s[i] == 'B' && s[i + 1] == 'A') {
                    for (int j = i + 2; j < n - 1; j++) {
                        if (s[j] == 'A' && s[j + 1] == 'B') {
                            flag = true;
                        }
                    }
                    break;
                }
            }
            if(flag){
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
        }
    int main()
        {
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    while(t--)
    {
        solve();
    }
        return 0;
}



