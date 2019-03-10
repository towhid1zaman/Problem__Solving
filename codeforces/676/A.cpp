#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int n;
        cin>>n;
        vector<int>v(n);
        int p1 = 0;
        int pn = 0;
            for(int i = 0; i<n;i++){
                cin>>v[i];
                if(v[i]==1)p1 = i;
                else if(v[i]==n)pn = i;
            }
             cout << max(max(p1,n-p1-1), max(pn,n-pn-1)) ;



     return 0;
}

