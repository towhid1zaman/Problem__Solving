#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{

       int n;
       cin>>n;
        int cnt = 0;
        for(int i = 1; i<=n;i++){
                if(i%2==1){
                    for(int j = 1; j<=n;j++){
                        if(j%2==1){
                            //cout<<"C";
                            cnt++;
                        }
                        else{
                      //      cout<<".";
                        }
                    }
                    //cout<<endl;
            }
            else{
                for(int j = 1; j<=n;j++){
                        if(j%2==1){
                            //cout<<"C";
                            //cnt++;
                        }
                        else{
                            //cout<<".";
                            cnt++;
                        }
                    }
                    //cout<<endl;
            }
        }
        cout<<cnt<<endl;
         for(int i = 1; i<=n;i++){
                if(i%2==1){
                    for(int j = 1; j<=n;j++){
                        if(j%2==1){
                            cout<<"C";
                        }
                        else{
                            cout<<".";
                        }
                    }
                    cout<<endl;
            }
            else{
                for(int j = 1; j<=n;j++){
                        if(j%2==1){
                            cout<<".";
                            //cnt++;
                        }
                        else{
                            cout<<"C";
                        }
                    }
                    cout<<endl;
            }
        }
        return 0;
}


