#include<bits/stdc++.h>
using namespace std;
int  a[1000000];
int main(){

                int n=0,i=0,j=0,m=0,t=0,k=1;
                cin>>n;

                for(i=1;i<=n;i++){
                      cin>>t;
                    for(j=k;j<t+k;j++)
                           a[j]=i;
                              k=k+t;
                                       }

                 cin>>m;

                 while(m--){
                          cin>>t;
                          cout<<a[t]<<endl;
                            }
}
