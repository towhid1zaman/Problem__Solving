#include<bits/stdc++.h>
#include<math.h>

using namespace std;

int main()
{
    int k,n, w ;

    cin>>k>>n>>w;
    int x=0;
            for(int i=1;i<=w;i++)
            {
                x=x+ (k*i);

            }

            if(n>=x)
            {
                cout<<"0"<<endl;
            }
            else
                cout<<x-n<<endl;




            return 0;
}
