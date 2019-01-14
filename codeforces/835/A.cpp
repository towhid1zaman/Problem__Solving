#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
	int main()
	{
		ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
			int s,v1,v2,t1,t2;
			cin>>s>>v1>>v2>>t1>>t2;
			int first = (2*t1) +(v1*s);
			int second = (2*t2) +(v2*s);
			;
			if(first<second)
                cout<<"First"<<endl;
			else if(first>second)
                cout<<"Second"<<endl;
			else
                cout<<"Friendship"<<endl;
		return 0;
	}

