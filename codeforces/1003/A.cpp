#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    int x;
    cin>>x;
    vector<int> v;
    map<int, int> mp;
    map<int, int>::iterator it;
        int  u;
        for(int i = 0; i<x; i++)
        {
            cin>>u;
            mp[u]++;
        }

            int k = 0;
            for(it = mp.begin(); it !=mp.end(); it++)
            {
                v.push_back(it->second);
            }
            int t =  v.size();
            //cout<<t<<endl;
            sort(v.begin(), v.end());
            cout<<v[t-1];

            return 0;
}

