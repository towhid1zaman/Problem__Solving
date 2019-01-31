#include<bits/stdc++.h>
using namespace std;
typedef long long LL;

int main()
{
    ///Bulbasaur
            string S;
            cin>>S;
            LL len  = S.length();
            LL ans = 0;
            vector<int>v;
                map<char,int>mp;
                 int B = 0,u=0,l=0,b=0,a=0,s=0,r=0;
                for(int i = 0; i<len;i++){
                        if(S[i]=='B'){
                            B++;
                        }
                        else if(S[i]=='u'){
                            u++;
                        }
                        else if(S[i]=='l'){
                            l++;
                        }
                        else if(S[i]=='b'){
                            b++;
                        }
                        else if(S[i]=='a'){
                            a++;
                        }
                        else if(S[i]=='r'){
                            r++;
                        }
                        else if(S[i]=='s'){
                            s++;
                        }
                }

                //cout<<B<<" "<<u<<" "<<l<<" "<<b<<" "<<a<<" "<<s<<" "<<r<<endl;
                v.push_back(B);
                v.push_back(b);
                v.push_back(s);
                v.push_back(r);
                v.push_back(l);
                v.push_back(a/2);
                v.push_back(u/2);
                ans = *min_element(v.begin(),v.end());
                cout<<ans<<endl;
//                    if(u>=B and u>1 and l>=B and b>=B and a>=B and a>1 and s>=B and r>=B){
//                        cout<<B<<endl;
//                    }
//                    else{
//                        cout<<0<<endl;
//                    }
        return 0;
}



