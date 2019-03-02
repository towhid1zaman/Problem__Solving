#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
        int n,m;
        cin>>n>>m;
        pair<int,int>v[n];
        for(int i = 0; i<n;i++){
            cin>>v[i].first>>v[i].second;
        }
        int s = 1;
        int ans = 0;
        int u = 0;
        while(u<n){
            while(s+m <=v[u].first){
                s+=m;
            }
            while(s != v[u].second+1){
                ans++;
                s++;
            }
            u++;
        }
        cout<<ans<<endl;

    return 0;
}




