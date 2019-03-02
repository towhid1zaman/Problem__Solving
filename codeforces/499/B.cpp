#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
 int table[101][101];
 #define sz(X) ((int)(X).size())
int main()
{

    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

       int n,m;
       cin>>n>>m;
       vector<string>sn(n);
       map<string,string>sm;
       map<string,string>::iterator it;
       for(int i = 0; i<m;i++){
        string a,b;
        cin>>a>>b;
        sm[a] = b;
       }
       for(int i = 0; i<n;i++){
        cin>>sn[i];
       }
       vector<string>ans;
       for(int i = 0;i<n;i++){
           // int len = sn[i].length();
                for(it = sm.begin(); it != sm.end(); it++){
                    if(sn[i] == (*it).first || sn[i] == (*it).second){
                        int len1 = sz((*it).first);
                        int len2 = sz((*it).second);
                        if(len1<=len2){
                            ans.push_back((*it).first);
                        }
                        else if(len2<len1){
                            ans.push_back((*it).second);
                        }
                    }
                }
       }
       int length = ans.size();
       for(int i = 0; i<length;i++){
        cout<<ans[i]<<" ";
       }cout<<endl;

    return 0;
}
