#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;
        int res = 0;
        for(int i = 0; i<n;i++){
            int x1,y1,x2,y2;
            cin>>x1>>y1>>x2>>y2;
            res+=(x2-x1+1)*(y2-y1+1);
        }
        cout<<res<<endl;


    return 0;
}



