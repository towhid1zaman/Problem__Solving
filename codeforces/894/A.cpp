#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
			string s;
			int ans = 0;
                cin>>s;
                int len = s.length();
                    for(int i = 0; i<len;i++)
                        for(int j=i+1; j<len;j++)
                            for(int k = j+1; k<len; k++)
                                if(s[i]=='Q' and s[j]=='A' and s[k]=='Q')
                                    ans++;
                cout<<ans<<endl;
		return 0;
	}

