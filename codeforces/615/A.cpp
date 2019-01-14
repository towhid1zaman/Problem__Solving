
#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
			int n,m;
			cin>>n>>m;
                int k;
                int x;
                int cnt=0;
                //vector<int>v;
                set<int>towhid;
                while(n--)
                {
                    cin>>x;
                        while(x--)
                        {
                            cin>>k;
                            towhid.insert(k);
                        }
                }
                int sz = towhid.size();
                if(sz==m)
                {
                    cout<<"YES"<<endl;
                }
                else
                    cout<<"NO"<<endl;
                //cout<<cnt<<endl;
		return 0;
	}
