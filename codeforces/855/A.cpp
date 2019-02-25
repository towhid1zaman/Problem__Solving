#include<bits/stdc++.h>
typedef long long LL;
using namespace std;
int main(){

        int n;
        cin>>n;
        map<string,int>mp;
        map<string, int>::iterator it=mp.begin();
        string s[n];
        for(int i = 0; i<n;i++){
           cin>>s[i];
        }
        for(int i = 0; i<n;i++){
                int cnt = 0;
            for(int j = 0; j<=i;j++){
                if(s[i]==s[j]){
                    cnt++;
            }}
        if(cnt>1){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
        }


        return 0 ;
}

