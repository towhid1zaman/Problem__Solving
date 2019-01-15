#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
     int mx =-1;
    LL n,k;
    LL I =0;
    LL S = 0;
    cin>>n>>k;
        int x;

        vector<int>v(n);
            for(int i = 0; i<n; i++)
            {
                cin>>v[i];
            }

            for(int i = 0; i<n; i++){
                           I=S=0;
                for(int j = 0; j<n;j++){
                    if(j%k==i%k)continue;
                        if(v[j]==1)   I++;
                         else
                            S++;
                }
                if(abs(I-S)>mx) mx = abs(I-S);
            }

            cout<<mx<<endl;

            return 0;
}
