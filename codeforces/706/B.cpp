#include<bits/stdc++.h>
using namespace std;

typedef long long LL;

int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i = 0; i<n;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int q;;
        cin>>q;

        while(q--){
            int a = 0, b = n-1, indx = -1;
            int X;
            cin>>X;
            while(a<=b)
            {
                int k = (a+b)/2;
                if(v[k]<=X){
                    indx = k;
                    a = k+1;
                }
                else b = k - 1;
            }
            cout<<indx+1<<endl;

        }


     return 0;
}


