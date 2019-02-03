  #include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        string s;
        cin>>s;
        string t;
            cin>>t;
            int a = s.length();
            int b = t.length();
            int cs = 0;
            int ct =  0;
            int ans = 0;
            if(a==b){
                for(int i = 0,j=0;i<a,j<b;i++,j++){
                    if( (s[i]=='a' or s[i] =='e' or s[i]=='i' or s[i]=='o' or s[i]=='u') and (t[j]=='a' or t[j] =='e' or t[j]=='i' or t[j]=='o' or t[j]=='u') ){
                        ans++;
                    }
                }
            }
            for(int i = 0; i<a;i++)
                {
                    if(s[i]=='a' or s[i] =='e' or s[i]=='i' or s[i]=='o' or s[i]=='u'){
                        cs++;
                    }
                }
                for(int i = 0; i<b;i++)
                {
                    if(t[i]=='a' or t[i] =='e' or t[i]=='i' or t[i]=='o' or t[i]=='u'){
                        ct++;
                    }
                }
                    if(ans==cs and ans ==ct and a==b){
                        cout<<"YES"<<endl;
                    }
                    else
                        cout<<"NO"<<endl;



    return 0;
}

