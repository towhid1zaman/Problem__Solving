#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
#define sz(X) ((int)(X).size())
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
         string s;
         cin>>s;
            int len = sz(s);
            if(len%2){
                cout<<-1<<endl;
                return 0;
            }
            int x = 0;
            int y = 0;
                for(int i = 0; i<len;i++){
                    if(s[i]=='U'){
                        y++;
                    }
                    if(s[i]=='D'){
                        y--;
                    }
                    if(s[i]=='L'){
                        x--;
                    }
                        
                    if(s[i]=='R'){
                        x++;
                    }
                    
                }
            cout<<(abs(x)+abs(y))/2 <<endl;

    return 0;
}





