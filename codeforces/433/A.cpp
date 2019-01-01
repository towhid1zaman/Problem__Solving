#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main(){

        int apple;
        int weight;
        int sum = 0;
        cin>>apple;
        int ek = 0;
        int dui = 0;
            for(int i =1; i<=apple;i++)
            {
                cin>>weight;
                if(weight==100) ek++;
                if(weight==200)dui++;
                sum+=weight;
            }
            //cout<<sum<<endl;
            //cout<<ek<<endl<<dui<<endl;
              if(apple==1)cout<<"NO"<<endl;
              else
              {
                  if(ek%2==0 and dui%2==0)cout<<"YES"<<endl;
                  else if(ek%2==0 and dui%2==1 and ek)cout<<"YES"<<endl;
                  else
                    cout<<"NO"<<endl;
              }
	return 0;
}




