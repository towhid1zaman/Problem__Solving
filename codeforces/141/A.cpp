#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
        ios::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);


       string a,b,s,sum;
            cin>>a>>b>>s;
            sort(a.begin(),a.end());
            sort(b.begin(),b.end());
            sort(s.begin(),s.end());

                if(a.size() + b.size() != s.size())
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                    sum = a + b;
                    sort(sum.begin(), sum.end());
                for(ll i = 0; i <sum.size(); i++)
                {
                  //  cin>>A[i];
                    if(sum[i] != s[i])
                    {
                        cout<<"NO"<<endl;
                        return 0;
                    }
                }
                //cout<<AS.size()<<endl;

//                cin>>B;
//                for(int i = 0; i <strlen(B); i++)
//                {
//                  //  cin>>B[i];
//                   BB[i]  = B[i] - 65;
//                }
//                //cout<<BS.size()<<endl;
//
//                cin>>C;
//                for(int i = 0; i <strlen(C); i++)
//                {
//                  //  cin>>C[i];
//                   CC[i]  = C[i] - 65;
//                }
//                //cout<<CS.size()<<endl;
//                        for(int i = 0;i <26 ;  i++)
//                            if(BB[i] == CC[i])
//                               {
//                                   cout<<"YES"<<endl;
//                                   return 0;
//                               }
//
//                       else
                        cout<<"YES"<<endl;

            return 0;
}
