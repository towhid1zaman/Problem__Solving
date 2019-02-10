#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
      	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        int x,y,z;
      	cin>>x>>y>>z;
      	int a,b,c;
      	cin>>a>>b>>c;
            int aw = 0;
            int di = 0;
            int mil = 0;
            if(a>=x){
                aw = 1;
                a-=x;
            }
            int s = a+b+c;
            if((a+b)>= y){
                di = 1;
                s-=y;
            }
            if(s>=z){
                mil = 1;
            }
            if(aw ==1 and di ==1 and mil == 1){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }
    return 0;
}

