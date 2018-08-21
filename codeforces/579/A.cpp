#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f0(n) for(size_t i=0;i<n;i++)
#define f1(n) for(size_t i=1;i<=n;i++)
const double pi= acos(-1);
int main()
{
    ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	 ll num,arr[64];
         cin>>num;
         ll i=0,r;
         ll c= 0;
         while(num!=0)
        {
          r = num%2;
          arr[i++] = r;
          num /= 2;
          //c++;
        }
       // cout<<c<<endl;
//            if(arr[0]==1)
//            {
//                cout<<c+1-(c-1);
//            }
//            else
//                cout<< "1"<<endl;
                    for(int j=i-1;j>=0;j--)
                    {
                        if(arr[j]==1)
                            c++;
                    }
                    cout<<c<<endl;
//        for(ll j= i-1; j<=0;j--)
//        {
//            c++;
//            if(a[0]==1)
//        }
    return 0;
}


