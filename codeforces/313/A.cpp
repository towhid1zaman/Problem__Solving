#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
        ll n;
        string s;
        cin>>s;
                if(s[0] !='-')
                {
                    for(ll i =0;i<s.size();i++)
                    {
                        cout<<s[i];
                    }
                }
                else
                    if(fabs(s[s.size()-1]) >= fabs(s[s.size()-2]))
                        {
                            for(ll i=0;i<s.size()-1;i++)
                                cout<<s[i];
                        }
                       else  if(fabs(s[s.size()-1]) < fabs(s[s.size()-2]) and s.size() !=3)
                        {
                            for(ll i=0;i<s.size()-2;i++)
                                cout<<s[i];
                                cout<<s[s.size()-1];
                        }
                         else if(fabs(s[s.size()-1]) < fabs(s[s.size()-2]) and s.size() ==3)
                        {
                            if(s[2]=='0')
                                cout<<s[2];
                            else if(s[2] !=0)
                                    cout<<s[0]<<s[2];
                        }

        /*
            if(n>=0)
            {
                cout<<n<<endl;
            }
            else
            {
                    std::stringstream ss;
                    ss<<n;
                    ss>>s;
                    ///cout<<s;
                    int len = s.length();
                    if(len<=3)
                    {
                        s[len-2]='\0';
                        s[len-1]='\0';
                        std::stringstream sss;
                            sss<<s;
                            int nn;
                            sss>>nn;
                            cout<<nn;
                    }
                    else
                    {
                         s[len-1]='\0';
                    std::stringstream sss;
                    sss<<s;
                    int nn;
                    sss>>nn;
                    cout<<nn;
                    }

            }
            */
        return 0;
}
