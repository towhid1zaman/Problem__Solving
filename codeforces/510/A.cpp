#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){
        int n,k;
        cin>>n>>k;
            for(int i = 0; i<n;i++)
            {

                            if(i%2==0)
                            {
                                for(int u = 1;u<=k;u++)
                                {
                                    cout<<"#";
                                }
                                cout<<endl;
                            }
                            else if(i%4==1)
                            {
                                for(int u = 0;u<k-1;u++)
                                {
                                cout<<".";
                                }
                                 cout<<"#";
                                cout<<endl;
                            }

                            else
                            {
                                    cout<<"#";
                                            for(int u = 0; u<k-1;u++)
                                            {
                                                cout<<".";
                                            }
                                    cout<<endl;
                            }


            }

	return 0;
}



