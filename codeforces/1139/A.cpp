#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
      int n;
    cin>>n;
    string s;
    cin>>s;
    int l =s.length();
    int cnt = 0;
    for (int i = 0; i < l; i++)
    {
        int t = s[i] - '0';
        if (t % 2 == 0)
            cnt += (i + 1);
    }
    cout<<cnt<<endl;

     return 0;
}



