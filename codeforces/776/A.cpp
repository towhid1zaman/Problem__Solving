#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
     ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        string a,b;
        cin>>a>>b;
        int n;
        cin>>n;
          queue<string> m,r;
          for(int i = 0; i<n;i++){
            string c,d;
            cin>>c>>d;
            m.push(c);
            r.push(d);
          }
            cout<<a<<" "<<b<<endl;
                for(int i = 0; i<n;i++){
                    if(m.front()==a){
                        a = r.front();
                        m.pop();
                        r.pop();
                    }
                    else{
                        b = r.front();
                        m.pop();
                        r.pop();
                    }
                    cout<<a<<" "<<b<<endl;
                }
     return 0;
}



