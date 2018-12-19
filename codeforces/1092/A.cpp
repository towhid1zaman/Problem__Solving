#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
        ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
        ll t;
            cin>>t;
                while(t--)
                {
                    ll a,b;
                    cin>>a>>b;
                        string t;
                            for(int i = 0; i<b; i++)
                            {
                                t+='a' + i;
                            }
                        string result;
                            while(result.size()<a)
                            {
                                result+=t;
                            }
                            for(int i = 0; i<a; i++)
                            {
                                cout<<result[i];
                            }
                            cout<<"\n";
                }
        return 0;
}
