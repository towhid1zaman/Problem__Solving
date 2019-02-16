#include<bits/stdc++.h>
using namespace std;
typedef long long LL;
int main()
{
        ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
        int n;
        cin>>n;
        char v[n][n];
        for(int i = 0; i<n;i++){
            for(int j = 0; j<n;j++){
                cin>>v[i][j];
            }
        }
        char a = v[0][0];
        char b = v[0][1];
        bool ans = true;
            for(int i = 0; i<n;i++){
                for(int j = 0; j<n;j++){
                    if(i==j or (i+j == n-1)){
                        if(v[i][j] != a){
                            ans = false;
                            break;
                        }
                    }
                    else{
                        if(v[i][j] != b){
                            ans = false;
                            break;
                        }
                    }
                }
                if(ans==false){
                    break;
                }
            }
            if(!ans or
                a==b){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }

        return 0;
}


