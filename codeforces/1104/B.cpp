#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
  	ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

        string s;
        cin>>s;
        int len = s.length();
        stack<char>st;
        int cnt = 0 ;
            for(int i = 0; i<len; i++)
            {
                if(st.empty()==true)
                {
                    st.push(s[i]);
                }
                else
                {
                    if(st.top()==s[i])
                    {
                        st.pop();
                        cnt++;
                    }
                    else
                        st.push(s[i]);
                }

            }
            //cout<<cnt<<endl;
            if(cnt%2==1)
            {
                cout<<"Yes"<<endl;
            }
            else
                cout<<"No"<<endl;

    return 0;
}

