#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
#define MAX 100005
int main(){
        LL n;
        cin>>n;
        vector<LL>v(MAX);
        for(int i = 0; i<n;i++){
                int x;
                cin>>x;
                v[x]++;
        }
        for(int i = 2; i<=MAX;i++)
        {
            v[i] = max(v[i-1],v[i-2]+v[i]*i);
        }
        cout<<v[MAX];
        return 0;
}
