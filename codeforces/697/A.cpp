  #include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
      	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

            LL t,s,x;
            cin>>t>>s>>x;
            if(x%s == t%s and t<=x){
                cout<<"YES"<<endl;
            }
            else if(x%s == (t+1)%s and (t+1)<x){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

    return 0;
}



