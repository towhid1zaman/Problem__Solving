#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
            LL a,b;
            cin>>a>>b;
            if(a%2==1){
                a++;
            }
                if((abs(a-b) <2)){
                    cout<<-1<<endl;
                }
                else{
                    cout<<a<<" "<<a+1<<" "<<a+2<<endl;
                }


        return 0;
}


