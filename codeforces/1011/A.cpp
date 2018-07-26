#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,sum=0,counter=1,stage=0;
            cin>>n>>k;

            char s[n+1];
            cin>>s;
            sort(s,s+n);

            sum+=(int)s[0]-(int)'a'+1;


   for(int i=1;i<n && counter<k;i++)
    {
        if(((int)s[i]-(int)s[stage])>1)
        {
            sum+=(int)s[i]-(int)'a'+1;
            counter++;
            stage=i;


        }
    }



    if(counter==k)
        cout<<sum<<endl;
    else
        cout<<"-1";





    return 0;
}