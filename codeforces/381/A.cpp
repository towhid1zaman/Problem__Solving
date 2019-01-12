#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
bool f(int x, int y)
{
    return x>y;
}
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
        for(int i = 0;i<n;i++)
        {
            cin>>v[i];
        }

        //sort(v.begin(),v.end(),f);
        int i = 0, j=n-1;
        int Sereja =0,Dima = 0;
       while(i<=j)
       {
           if(v[i]<v[j])
           {
               Sereja+=v[j--];
           }
           else
           {
               Sereja+=v[i++];
           }
           if(i>j) break;

           if(v[i]<v[j])
           {
               Dima+=v[j--];
           }
           else
           {
               Dima+=v[i++];
           }
       }
            cout<<Sereja<<" "<<Dima<<endl;
    return 0;
}
